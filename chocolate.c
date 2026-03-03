// c program 
#include <stdio.h>

int main() {
    int small, big, goal;

    printf("Enter number of small bars: ");
    scanf("%d", &small);

    printf("Enter number of big bars: ");
    scanf("%d", &big);

    printf("Enter goal kilos: ");
    scanf("%d", &goal);

    int big_used = goal / 5;

    if (big_used > big)
        big_used = big;

    int remainder = goal - (big_used * 5);

    if (remainder <= small)
        printf("Small bars to use: %d", remainder);
    else
        printf("-1");

    return 0;
}