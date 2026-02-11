#include <stdio.h>

int main() {
    int cigars,weekend;
    printf("enter the number of cigars:");
    scanf("%d",&cigars);
    printf("enter 1 for weekend\t 0 for not weekend:");
    scanf("%d",&weekend);
    if(weekend==1)
    {
        if(cigars>=40)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(cigars>=40 && cigars<60)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
return 0;
}

