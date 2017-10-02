#include<stdio.h>
void main()
{int n,a,i;
system("color 3F");
printf("Enter any number : ");
    scanf("%d",&n);
    printf("This is the Nomenclature of : %d\n",n);
      i=1;
    while(i<=10)
    {
       a=n*i;
    printf("%d*%d=%d\n",n,i,a);
    i++;

    }
return ;
}
