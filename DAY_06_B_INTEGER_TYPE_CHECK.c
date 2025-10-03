#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if(n >= 0) {
        if(n == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    } else {
        printf("Negative\n");
    }
    return 0;
}
