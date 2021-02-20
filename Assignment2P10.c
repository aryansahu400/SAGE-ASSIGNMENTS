\\Write a program to create structure for a account holder in a bank with following fields: name,account number,address, balance,and display the details of five account holders.

#include <stdio.h>

struct customer
{
    int account_no;
    char name[80];
    char address[80];
    int balance;
};

void accept(struct customer[], int);
void display(struct customer[], int);
int main()
{
    struct customer data[20];
    int n, choice, account_no, amount,address, index;

    printf("Banking System\n\n");
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
    do
    {

        printf("\nBanking System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-1) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
        }
    }
    while (choice != 0);

    return 0;
}

void accept(struct customer list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        //fflush(stdin);
        printf("Enter name : ");
        scanf("%s",&list[i].name);
        printf("Enter address : ");
        scanf("%s",&list[i].address);
        printf("Enter Blance: ");
        scanf("%d",&list[i].balance);
    } 
}

void display(struct customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%s\t%d\n", list[i].account_no, list[i].name,list[i].address,
            list[i].balance);
    } 
}
