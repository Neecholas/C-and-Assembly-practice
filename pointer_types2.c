#include <stdio.h>

int main(){
  int i;

  char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
  int int_array[5] = {1, 2, 3, 4, 5,};

  char *char_pointer;
  int *int_pointer;

  char_pointer = int_array;
  int_pointer = int_array;

  for (i = 0; i < 5; i++) {
    printf("[]%s\n", );
  }
}