#include <stdio.h>

int main(){
  int i;

  //creates an array that is 5 spaces long, and contains 5 letters
  char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
  // creates an array that contains 5 integers
  int int_array[5] = {1, 2, 3, 4, 5};

  char *char_pointer;
  int *int_pointer;

  char_pointer = char_array;
  int_pointer = int_array;

  for (i = 0; i < 5; i++){
    // prints out each pointer to the first object in each array, then moves through to the others
    printf("[integer pointer] points to %p, which contains the integer %d \n", int_pointer, *int_pointer);
    int_pointer = int_pointer + 1;
  }

  for (i=0; i < 5; i++){
    printf("[charecter pointer] points to %p, which cointains the charecter %c \n", char_pointer, *char_pointer);
    char_pointer = char_pointer + 1;
  }

}
