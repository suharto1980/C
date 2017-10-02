//this will calculate cgpa for any semester by the rules of UGC Bangladesh.
//version 1.0
//copyright reserved to:idea Shuvro Suharto & Coding:Sajidur Rahman

#include <stdio.h>
#define max 100 //maximum member for custom datatype semester


float tgpa,tcredit,cgpa;//this can be access globally



//custom datatype semester;
struct semester{
    char subcode[10];
    int credit;
    float marks;
    float gpa;

};

struct semester s[max];

int main()
{
    int n,i;
    printf("How many subject do have:");
    scanf("%d",&n);
//input from user
    for(i=0;i<n;i++){
        printf("Enter Subject Code: ");
        scanf("%s",s[i].subcode);
        printf("Enter credit of %s : ",s[i].subcode);
        scanf("%d",&s[i].credit);
        printf("Enter marks of %s : ",s[i].subcode);
        scanf("%f",&s[i].marks);
    }
    //converting marks into gpa
    for(i=0;i<n;i++){
        if(s[i].marks>=40){
            if(s[i].marks>=45){
                    if(s[i].marks>=50){
                        if(s[i].marks>=55){
                            if(s[i].marks>=60){
                                if(s[i].marks>=65){
                                    if(s[i].marks>=70){
                                        if(s[i].marks>=75){
                                            if(s[i].marks>=80){
                                                if(s[i].marks>=101){
                                                    s[i].gpa=0.00;
                                                    printf("You have input marks more than 100 so calculation will be wrong\n");

                                                }
                                                else{
                                                    s[i].gpa=4.00;
                                                }
                                            }else{
                                                s[i].gpa=3.75;
                                            }
                                        }
                                        else{
                                            s[i].gpa=3.50;
                                        }
                                    }else{
                                        s[i].gpa=3.25;
                                    }
                                }else{
                                    s[i].gpa=3.00;
                                }
                            }else{
                                s[i].gpa=2.75;
                            }
                        }else{
                            s[i].gpa=2.50;
                        }
                    }
                    else{
                        s[i].gpa=2.25;
                    }
            }else{
                s[i].gpa=2.00;
            }
        }else{
            s[i].gpa=0.00;
           printf("You have failed\n");
        }

    }
    //adding total gpa  multiplication with credit & summation of  total credit
    for(i=0;i<n;i++){
            tgpa=tgpa+(s[i].gpa*s[i].credit);
            tcredit=tcredit+s[i].credit;
    }
    //actual cgpa calculation
    cgpa=tgpa/tcredit;
    //showing result
    printf("Yor result is result is bellow : \n");
    printf("Subject Code\t Subject Credit \t GPA\n");
    for(i=0;i<n;i++){
        printf("%s \t\t\t %d \t\t %.2f\n",s[i].subcode,s[i].credit,s[i].gpa);
    }
    printf("Your CGPA is %.2f \n",cgpa);

    return 0;

}




