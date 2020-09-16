#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct student
{
    int marks,age,flag;
    
};

void main()
{
    struct student st[10];    
    printf("Enter Records of 5 students");    
    for(int i=0;i<10;i++)
    {    
        printf("\nEnter Age:");    
        scanf("%d",&st[i].age);    
        printf("\nEnter Marks:");    
        scanf("%d",&st[i].marks);    
    }    
    printf("\nStudent Information List:");    
    for(int i=0;i<10;i++)
    {   
        int x = i;
        printf("\nID: %d, Age: %d , Marks: %d \n", x , st[i].age,st[i].marks); 
        if(st[i].marks>=0&&st[i].marks<=100)
        {
        
            if(st[i].marks>=65&&st[i].age>=20)
            {
                 printf("Student has been qualified for admission with marks: %d\n",st[i].marks);
            }
            else if(st[i].marks<=64&&st[i].age>=20)
            {
                printf("student details not eligible for admission\n");
            }
            else if(st[i].marks>=65&&st[i].age<=19)
            {
                printf("student details not eligible for admission\n");
            }
            else
            {
                printf("student details not eligible for admission\n");
            }
        }
        else
            printf("Invalid Input");
    }  
}
