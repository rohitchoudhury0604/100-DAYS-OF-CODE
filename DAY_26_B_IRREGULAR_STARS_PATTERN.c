Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include<stdio.h>
int main(){
  int i,j;

  for(i=1; i<=5; i = i+2){
    for(j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");

    if(i<5){
      printf("\n");
    }
  }

  for(i=3; i>=1; i=i-2){
    for(j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
