Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main(){
  int n, i, num, found = 0, index = -1;

  printf("Enter how many elements you want in the array : \n");
  scanf("%d",&n);

  int arr[n];
  printf("Enter the elements of the array : \n");

  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }

  printf("Enter the number you want to search for in the array : \n");
  scanf("%d", &num);

  for(i=0; i<n; i++){
    if(arr[i] == num){
      found = 1;
      index = i;
      break;
    }
  }

  if(found == 1){
    printf("Found at index %d\n", index);
  }
  else{
    printf("-1\n");
  }
  
  return 0;
}
