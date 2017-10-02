
#include<stdio.h>
#include<conio.h>
int main()
{
    int s[10],n,i,max;
    printf("How many number?\t");
    scanf("%d",&n);
    printf("Enter %d integer numbers:\n",n);
    for(i=0; i<n;i++)
        scanf ("%d", &s[i]);
    max=s[0];
    for(i=1;i<n;i++)
    {
        if (s[i]>max)
            max=s[i];
        else
            max=max;
            }
        printf("%d is the maximum of given numbers", max);
 getch();
}

