Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main(){
  int n, i, max, min;

  printf("Enter how many elements you want in the array : \n");
  scanf("%d",&n);

  int arr[n];

  printf("Enter the elements of the array : \n");
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  max = arr[0];
  min = arr[0];

  for(i=0; i<n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
    if(arr[i] < min){
      min = arr[i];
    }
  }
  printf("\nMax=%d, Min=%d\n",max,min);
  return 0;
}
