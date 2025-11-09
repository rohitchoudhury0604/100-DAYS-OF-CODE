Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main(){
  int n, m, i, j;
  printf("Enter how many elements you want in the first array : \n");
  scanf("%d",&n);

  int arr1[n];

  printf("Enter the elements of the first array : \n");
  for(i=0; i<n; i++){
    scanf("%d",&arr1[i]);
  }
  printf("Enter how many elements you want in the second array : \n");
  scanf("%d",&m);

  int arr2[m];

  printf("Enter the elements of the second array : \n");
  for(j=0; j<m; j++){
    scanf("%d",&arr2[j]);
  }

  int p = m+n;
  int merged[p];

  for(i=0; i<n; i++){
    merged[i] = arr1[i];
  }
  for(j=0; j<m; j++){
    merged[n+j] = arr2[j];
  }
  for(i=0; i<p; i++){
    printf("%d ",merged[i]);
  }
  printf("\n");
  return 0;
}
