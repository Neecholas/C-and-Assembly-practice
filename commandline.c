#include <stdio.h>

int main(int arg_count, char *arg_list[]){
  int i;//initialize i
  printf("There were %d arguements provided:\n", arg_count); //
  for(i=0; i < arg_count; i++)
    printf("arguement #%d\t-\t%s\n", i, arg_list[i]);
}
