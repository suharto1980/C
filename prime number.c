#include<stdio.h>
#include<conio.h>
void main()
{
 system("color 3F ");
int i,j,k;
printf("Enter your number=");
scanf("%d",&k);
printf("Prime number btween 1 to %d are:",k);
for(i=2;i<=k;i++)
{
    for(j=2;j<=i;j++)
    {
        if(i%j==0)
            break;
    }
    if(i==j)
        printf("%4d",i);
}
getch();
}
