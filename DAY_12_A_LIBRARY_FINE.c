Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.


#include<stdio.h>
int main(){
  int fine =0, days;
  printf("Enter the number of days you are late : \n");
  scanf("%d",&days);

  if(days<=0){
    printf("\nYou are on time");
  }
  else if(days<=5 && days>0){
    fine = (days*2);
    printf("\nFine ₹%d",fine);
  }
  else if(days>5 && days<=10){
    fine = (5*2) + ((days-5)*4);
    printf("\nFine ₹%d",fine);
  }
  else if(days>10 && days<=30){
    fine = (5*2) + (5*4) + ((days-10)*6);
    printf("\nFine ₹%d",fine);
  }
  else if(days>30){
    printf("\nMembership Cancelled");
  }
  return 0;

 
}
