//C program to check given number is even or odd.
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter Any Number: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("This Number is a Even number");
    }
    else
    {
        printf("This Number is a Odd number");
    }
    return 0;
}
