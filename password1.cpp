#include<stdio.h>
#include<conio.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

int main()
{

char password [100];
int i=0;
char ch;
printf(" Enter password:");
while(1)
{
        ch=getch();
        if (ch==ENTER)
        {
            password[i]='\0';
            break;
        }
        else if (ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if (ch==TAB || ch==SPACE)
        {
            continue;
        }
        else
            {
            password[i]=ch;
            i++;
            printf("*");
        }
        }
        printf("\n\n Your password is :%s",password);
        printf("\nLength:%d",i);
        getch();
 return 0 ;
}

