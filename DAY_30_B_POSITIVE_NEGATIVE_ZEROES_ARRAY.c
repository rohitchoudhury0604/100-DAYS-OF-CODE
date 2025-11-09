Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main(){
    int n,i, positive=0, negative=0, zeroes =0;

    printf("Enter number of elements of the array : \n");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter elements of the array : \n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
        else if(arr[i] == 0){
            zeroes++;
        }
    }
    printf("\nPositive=%d, Negative=%d, Zeroes=%d\n",positive,negative,zeroes);
    return 0;
}
