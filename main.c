// Author: Jonathan Ahn jxa5570@psu.edu 
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if(n <= 0){
    return 0;
  }
  else {
    return (n%10 + digit_sum(n/10));
  }
}


int main(void) {
  char* n = readline("Enter an int: ");
  int s = atoi(n);
  printf("sum of %s is %d.\n", n, digit_sum(s));
  return 0;
}