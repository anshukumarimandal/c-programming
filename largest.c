 //wrote a c program to print the largest number of the given number 
 #include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("Largest = %d", a);
    else
        printf("Largest = %d", b);

    return 0;
}