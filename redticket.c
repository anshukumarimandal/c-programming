#include <stdio.h>
    int main() {
    int a,b,c;
    printf(" enter the a value:");
    scanf("%d",&a);
    printf(" enter the b value:");
    scanf("%d",&b);
    printf(" enter the c value:");
    scanf("%d",&c);
    int ab=a+b;
    int bc=b+c;
    int ca=a+c;
    if(ab==10 || b==10 || c==10)
    {
        printf("10");
    }
    else if(a>10 || b>10 || c>10)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
return 0;
}
