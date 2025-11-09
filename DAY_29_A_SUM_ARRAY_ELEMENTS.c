Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include<stdio.h>
int main(){
  int n, i, sum=0;

  printf("Enter how many elements you want in the array : \n");
  scanf("%d",&n);

  int arr[n];

  printf("Enter the elemnts of the array : \n");

  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  for(i=0; i<n; i++){
    sum += arr[i];
  }
  printf("\n%d\n",sum);
  return 0;
}
