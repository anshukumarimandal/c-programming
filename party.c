#include <stdio.h>

int main() {
   int tea,candy;
   printf(" Enter the amount of tea:");
   scanf("%d",&tea);
   printf(" Enter the amount of candy:");
   scanf("%d",&candy);
   if(tea<5 || candy<5)
   {
       printf("0(bad)");
    }
     else if (tea>=2*candy || candy>=2*tea)
    {
        printf("2(great)");
    }
    else 
    {
        printf("1(good)");
    }
    
    return 0;
}