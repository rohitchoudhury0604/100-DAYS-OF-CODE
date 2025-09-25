#include<stdio.h>
int main(){
  int temp_C,temp_F;
  printf("Enter temperature in Celsius : ");
  scanf("%d",&temp_C);

  temp_F = (temp_C*9)/5 + 32;
  printf("Fahrenheit = %d\n",temp_F);
  return 0;
}  
