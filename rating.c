#include <stdio.h>

int main() {
   int you,date;
   printf("Enter the ratings of your clothes:");
   scanf("%d",&you);
   printf("Enter the ratings of date's clothes:");
   scanf("%d",&date);
   if(you<=2 || date<=2)
   {
       printf("0");
   }
   else if( you>=8 || date>=8)
   {
       printf("2");
   }
   else
   {
       printf("1");
   }
    return 0;
}