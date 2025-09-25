#include<stdio.h>
#include<math.h>
int main(){
    float principal_amt,rate,time,si,ci;
    scanf("%f %f %f",&principal_amt,&rate,&time);
    
    si = (principal_amt * rate * time)/100;
    ci = principal_amt * pow(1 + (rate/100), time) - principal_amt;
    
    printf("Simple Interest=%.1f, Compound Interest=%.2f",si,ci);
    return 0;
}
