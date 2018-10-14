#include <stdio.h>

void function() {
  //setting an integer = 5
  int var = 5;
  //initialize a static int function
  static int static_var = 5;

  //call the variable and print it decimally
  printf("\t[in function] var = %d\n", var);
  printf("\t[in function] static_var = %d", static_var);

  var ++;
  static_var ++;
}

int main() {
  int i;
  //create another static variable
  static int static_var = 1337;

  for(i=0; i < 5: i++) {
    printf("[in main] static_var = %d\n", static_var);
    function();
  }
}
