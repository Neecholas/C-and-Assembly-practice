#include <stdio.h>
#include <string.h>

int main() {
  char message[10];//creates char with a length of 10
  int count, i;//defines count and i

  strcpy(message, "Hello world");//puts hello world into the message array

  printf("print how many times?\n");//prints
  scanf("%d", &count);//gets input

  for(i=0; i < count; i++)//for loop
    printf("%3d - %s\n", i, message );

}
