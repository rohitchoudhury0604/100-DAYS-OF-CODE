Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main(){
    long long num;
    int digit_counts[10] = {0};
    int digit;
    int max_count;
    int result_digit;
    int i;

    printf("Enter an integer number : \n");
    scanf("%lld", &num);

    if (num < 0){
        num = -num;
    }

    do{
        digit = num % 10;
        digit_counts[digit]++;
        num /= 10;
    } while (num != 0);

    max_count = 0;
    result_digit = 0;

    for (i = 0; i < 10; i++){
        if (digit_counts[i] > max_count){
            max_count = digit_counts[i];
            result_digit = i;
        }
    }

    printf("The digit that occurs the most times is : %d\n", result_digit);

    return 0;
}
