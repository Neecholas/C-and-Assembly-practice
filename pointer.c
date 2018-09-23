#include <stdio.h>
#include <string.h>
 int main() {
  char str_a[20]; //A 20 element charecter array
  char *pointer; //A pointer, meant for a charecter array
  char *pointer2;

  strcpy(str_a, "Hello, world!\n"); //puts this string within the char array
  pointer = str_a; //sets the pointer to str_a
  printf(pointer);//prints
  pointer2 = pointer + 2;//adds two to the pointer
  printf(pointer2);//prints it
  strcpy(pointer2, "y you guys!\n");
  printf(pointer);
 }
