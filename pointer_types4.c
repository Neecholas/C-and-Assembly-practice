#include <stdio.h>
int main() {
  int i;

  char char_array = {'a', 'b', 'c', 'd', 'e'};
  int int_array[5] = {1, 2, 3, 4, 5};

  void *void_pointer[5];

  void_pointer = (void *) char_array;

  for(i=0; i < 5; i++) {
    printf("[char pointer] points to %p, which contains the char '%c'\n", void_pointer, *((char *) void_pointer));
  }
}
