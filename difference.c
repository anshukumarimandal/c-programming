#include <stdio.h>

int main() {
    int a,b,c;
    int med,big,small;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        big=a;
        if(b>c)
        {
           med=b;
           small=c;
        }
        else
        {
            med=c;
            small=b;
        }
    }
    else if(b>a && b>c)
    {
        big=b;
        if(a>c)
        {
           med=a;
           small=c;
        }
        else
        {
            med=c;
            small=a;
        }
    }
    else
    {
        big=c;
        if(a>b)
        {
           med=a;
           small=b;
        }
        else
        {
            med=b;
            small=a;
        }
    }
    if(big-med==med==small)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}  