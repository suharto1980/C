#include<stdio.h>
void main()
{ system ("color 3F");
   int  month,a,day,year,weeks;
printf("Enter The number of days you want to convert:");
   scanf("%d",& a);
    year=(a/365);
    month=(a%365)/30;
    weeks=(a%365)%30/7;
    day =(a%365)%30%7;
printf(" Year=%d \n Month=%d \n Weeks=%d \n Day=%d",year, month,weeks,day);
}
