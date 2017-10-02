#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    printf("Enter the two interger numbers using separate by space:");
    scanf("%d%d",&i,&j);
    if(i>j)
       k=i;
       else
        k=j;
    again:if(k%i==0 && k%j==0)
    printf("The GCD of %d and is %d:%d",i,j,k);
    else {
            k=k+1;
    goto again;

    }
    getch();
}
