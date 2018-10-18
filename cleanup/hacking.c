//create a method that takes a charecter pointer
void fatal(char *message) {
  char error_message[100];

  strcpy(error_message, "[!!] Fatal Error ");
  strncat(error_message, message, 83);
  perror(error_message);
  exit(-1);
}

//error checked malloc funciton that returns a poitner
void *ec_malloc(unsigned int size){
  //creates a pointer
  void *ptr;
  //sets pointer to memory on the heap equal to the size
  ptr = malloc(size);
  //checks that there is memory and if not throws a custom error
  if(ptr == NULL)
    fatal("in ec_malloc() on memory allocation");
  return ptr;
}
