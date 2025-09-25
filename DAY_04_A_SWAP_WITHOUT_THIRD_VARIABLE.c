#include<stdio.h>
int main(){
  int a,b;
  printf("Enter two numbers to be swapped : ")
  scanf("%d %d "&a,&b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After swap : %d %d",a,b);
  return 0;
}
