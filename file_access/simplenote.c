#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>

void usage(char *prog_name, char *filename) {
  printf("Usage: %s <data to add to %s>\n", prog_name, filename);
  exit(0);
}

void fatal(char *);
void *ec_malloc(unsigned int);

//create a main function that takes command line arguements
int main(int argc, char *argv[]){
  //initialize fd and create buffer and datafile pointers
  int fd;
  char *buffer, *datafile;

  //buffer is set equal to 100bytes worth of heap memory
  buffer = (char *) ec_malloc(100);
  //datafile is set equal to 20 bytes worth of heap memory
  datafile = (char *) ec_malloc(20);
  //copies the string to the datafile
  strcpy(datafile, "/tmp/notes");

  if(argc < 2)
    // outputs the usage file
    usage(argv[0], datafile);
  //copies the arguement from the file to the buffer
  strcpy(buffer, argv[1]);

  printf("[DEBUG] buffer @ %p: \'%s\'\n", buffer, buffer);
  printf("[DEBUG] datafile @ %p: \'%s\'\n", datafile, datafile);

  strncat(buffer, "\n", 1);

  fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
  //if the fd is invalid return an error
  if(fd == -1)
    fatal("in main() while opening file");
  printf("[DEBUG] file descriptor is %d\n", fd);
  // if write fails then return an error
  if(write(fd, buffer, strlen(buffer)) == -1)
    fatal("in main() while writing buffer to file");
  // if close fails then print error
  if(close(fd) == -1)
    fatal("in main() while closing file");

  printf("Note has been saved.\n");
  //with everything saved to the file, free up the heap memory
  free(buffer);
  free(datafile);
}

//handle errors
void fatal(char *message) {
  char error_message[100];

  strcpy(error_message, "[!!] Fatal Error");
  strncat(error_message, message, 83);
  perror(error_message);
  exit(-1);
}

void *ec_malloc(unsigned int size) {
  void *ptr;
  ptr = malloc(size);
  if(ptr == NULL)
    fatal("in ec_malloc() on memory allocation");
  return ptr;
}
