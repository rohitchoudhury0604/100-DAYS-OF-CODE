#include<stdio.h>
int main(){
  int l , b, area , perimeter;
  printf("Enter length of the rectangle : ");
  scanf("%d",&l);
  printf("Enter breadth of the rectangle : ");
  scanf("%d",&b);
  area = l*b;
  perimeter = 2*(l+b);
  printf("The area and perimeter of the rectangle is %d and %d",area,perimeter);
  return 0;
}
