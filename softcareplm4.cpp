//C program to check a given number is positive or negative.
#include<stdio.h>
int main ()
{
    int a;
    printf("Enter Any Number=");
    scanf("%d",&a);
    if (a<0)
    {
        printf("This Number is Negative ");
    }
    else if ( a>0)
    {
        printf("This Number is Positive");
    }
    else
        printf ("%d is not Negative or Positive",a  );
    return 0;
}
