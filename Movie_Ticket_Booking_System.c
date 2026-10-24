#include<stdio.h>
#include<string.h>

#define MAX 50
int i=0;                  //Global variables
struct movie
{
    char mName[30];
    int  mPrice;
    int  seats;
};
struct movie m[4]=
{
    {"Kalki 2",300,45},{"Spider Man",200,35},{"Jailer 2",200,30},{"Drishyam:The conclusion",250,35}
};
void discount(int total,int qty)
{
    int discount,finalAmount;
     if(qty>=5)
    {
        discount=(total*15)/100;
        finalAmount=total-discount;
    }
    else if(qty>=3)
    {
        discount=(total*5)/100;
        finalAmount=total-discount;
    }
    else
    {
        discount=0;
        finalAmount=total-discount;
    }
    printf("Discount:Rs.%d\n",discount);
    printf("Final Amount:Rs.%d\n",finalAmount);
}
void conertToLower(char x[])
{
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>='A' && x[i]<='Z')
        {
            x[i]+=32;
        }
    }
}
int main()
{
    int choice,qty=0,id=1001,total,remainingSeats=0,valid=1;
    char name[MAX],option[4],mNum[11];
    printf("\n****MOVIE TICKET BOOKING SYSTEM*****\n");
    printf("\nAvailable movies:\n");
    for(i=0;i<4;i++)
    {
        printf("%d. %s  -  Rs.%d  -  Seats:%d\n",i+1,m[i].mName,m[i].mPrice,m[i].seats);
    }
    do
    {
        do
        {
            printf("Enter movie number(1-4):");

            if((scanf("%d",&choice))!=1)
            {
                printf("Invalid input!! Enter the number\n");
                while(getchar()!='\n');
                choice=0;
            }
            else if(choice<1 || choice>4 )
            {
                printf("Invalid input!! Enter the number(1-4)\n");
            }
        }while(choice<1 || choice>4);
        if(m[choice-1].seats>0)
        {
            printf("\nEnter customer details:\n");
            printf("Enter customer name:");
            getchar();
            scanf("%49[^\n]",name);
            do
            {
                printf("Enter mobile number(must be 10 numbers):");
                getchar();
                scanf("%10s",mNum);
                valid=1;
                if(strlen(mNum)!=10 || mNum[0]=='0')
                {
                    valid=0;
                }
                for(i=0;mNum[i]!='\0';i++)
                {
                    if(mNum[i]<'0' || mNum[i]>'9')
                    {
                        valid=0;
                    }
                }
                if(valid==0)
                {
                      printf("Invalid Mobile Number!\n");
                }
            }while(valid==0);

            do
            {
                printf("Enter number of tickets:");
                if(scanf("%d",&qty)!=1)
                {
                    printf("Invalid input!Enter a number.\n");
                    while(getchar()!='\n');
                    qty=0;
                }
                else if(qty>(m[choice-1].seats) || qty<=0)
                {
                    printf("Remaining seats are:%d\n %d tickets are available\n",m[choice-1].seats,m[choice-1].seats);
                }
            }while(qty>m[choice-1].seats || qty<=0);
            printf("\nBooking successful!!\n\n");
            printf("******BOOKING DETAILS*****\n");
            printf("booking ID:%d\n",id);
            id++;
            printf("Customer Name:%s\n",name);
            printf("Phone number:%s\n",mNum);
            printf("Movie:%s\n",m[choice-1].mName);
            printf("Ticket booked:%d\n",qty);
            printf("Price per ticket:%d\n",m[choice-1].mPrice);
            total=(m[choice-1].mPrice)*qty;
            printf("Amount:Rs.%d\n",total);
            discount(total,qty);
            m[choice-1].seats-=qty;
            remainingSeats=m[choice-1].seats;
            printf("\nRemaining seats:%d\n\n",remainingSeats);
        }
        else
        {
            printf("Ticket are sold out!!\n");
        }
        printf("Is there another coustomer(yes/no):");
        getchar();
        fgets(option,sizeof(option),stdin);
        option[strcspn(option,"\n")]='\0';
        conertToLower(option);
    }while(strcmp( option,"yes")==0);
}
