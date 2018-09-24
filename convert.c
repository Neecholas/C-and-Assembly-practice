#include <stdio.h>

void usage(char *program_name) {//defines usage and sets it's parameters as a pointer
  printf("Usage: %s <message> <# of times to repeat>\n", program_name); //interpolates the pointer to create a stirng
  exit(1);//exits the program
}

int main(int argc, char *argv[]){//int argc counts how many arguements and char *argv[] stores as an array of pointers
  int i, count;//creates variables i and count

  if(argc < 3)//checks if
    usage(argv[0]);
  count = atoi(argv[2]);
  printf("Repeating %d times..\n", count);

  for(i=0; i < count; i++)
    printf("%3d - %s\n", i, argv[1]);
}
