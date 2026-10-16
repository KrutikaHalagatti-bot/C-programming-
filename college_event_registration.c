#include<stdio.h>
#include<string.h>
int i,count=0;

struct participent
{
    int id;
    char name[30];
    char year[20];
};
struct participent p[50];
void registerstudent()
{
    int n;
    printf("Enter the number of student that are going to register:");
    scanf("%d",&n);
    if(count+n<=50 && n>0)
    {
         for(i=count;i<count+n;i++)
         {
            printf("Enter Candidate Name:");
            getchar();
            gets(p[i].name);
            printf("Enter year:");
            gets(p[i].year);
            p[i].id=1001+i;
            printf("\nRegister Id is:%d\n\n",p[i].id);
         }
         count+=n;
    }
    else if(count+n>50)
        printf("Register limit is exceeded!!");
    else
        printf("Enter valid input!");
}
void displayAll()
{
    for(i=0;i<=count;i++)
    {
        printf("\nCandidate %d\n",i+1);
        printf("Name:%s\n",p[i].name);
        printf("Id:%d",p[i].id);
        printf("Year:%s",p[i].year);
    }
}
void search()
{
    int search,flag=0;
    if(count!=0)
    {
        printf("Enter Id to search:");
        scanf("%d",&search);
        for(i=0;i<count;i++)
        {
            if(p[i].id==search)
            {
                flag=1;
                printf("Name:%s\n",p[i].name);
                printf("Year:%s\n",p[i].year);
            }
        }
        if(flag==0)
        {
            printf("No candidate is found for entered id!!!\n");

        }
    }
    else
        printf("No Candidates regiatered yet!!\n");
}
void total()
{
    printf("Total number of candidates:%d\n",count);
}
int main()
{
    int choice;

    printf("===================ICCA====================\n");
    printf("--------COLLEGE EVENT REGISTRATION---------\n");
    do
    {
        printf("\n\n1.Register student\n2.View all Registrations\n3.Search Registrtions\n4.Total Registrations\n5.Exit\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:registerstudent();break;
            case 2:displayAll();break;
            case 3:search();break;
            case 4:total();break;
            case 5:printf("---------------\n");break;
            default:printf("Enter the valid input...");
        }
        if(choice==5)
            break;
    }while(choice<=5);


}
