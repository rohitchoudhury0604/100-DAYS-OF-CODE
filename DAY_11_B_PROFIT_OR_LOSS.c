
// Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>e
int main()
{
    int cp, sp, percent;
    scanf("%d %d", &cp, &sp);
    if (sp > cp)
    {
        percent = (sp - cp) * 100 / cp;
        printf("Profit %d%%\n", percent);
    }
    else if (cp > sp)
    {
        percent = (cp - sp) * 100 / cp;
        printf("Loss %d%%\n", percent);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}
