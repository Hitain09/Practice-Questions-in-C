#include<stdio.h>
int choice,n,rem,a,i;
void octal();
void decimal();
int main()
{
    printf("Enter your choice\n Press 1 to convert Decimal to Octal\n Press 2 to convert
           Octal to Decimal \n");
           scanf("%d",&choice);
           switch (choice)
    {
        case 1: octal();
            break;
        case 2: decimal();
            break;
        default: printf("You have entered wrong choice\n");
    }
           }
           void octal()
    {
        rem;a=0;i=1;
        printf("Enter the decimal number :");
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%8;
            n=n/8;
            a=a+rem*i;
            i=i*10;
        }
        printf("Its octal no. is :%d\n",a);
    }
           void decimal()
    {
        rem;a=0;i=1;
        printf("Enter the octal number :");
        scanf("%d",&n);
        
        
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            a=a+rem*i;
            i=i*8;
        }
        printf("Its decimal no. is :%d\n",a);
    }
