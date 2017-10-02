//C program to swap two numbers.
#include<stdio.h>
int main(){
    int a1,a2,a3;
    printf("Enter Any Two Number=");
    scanf("%d %d",&a1,&a2);

    a3 = a1;
    a1 = a2;
    a2 = a3;

    printf("%d %d",a1,a2);
    return 0;
}
