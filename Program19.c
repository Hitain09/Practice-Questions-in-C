#include<stdio.h>
int choice,n,rem,a,i;
void binary();
void decimal();
int main()
{
    printf("Enter your choice\n Press 1 to convert Decimal to Binary\n Press 2 to
           convert Binary to Decimal \n");
           scanf("%d",&choice);
           switch (choice)
    {
        case 1: binary();
            break;
        case 2: decimal();
            break;
        default: printf("You have entered wrong choice\n");
    }
           }
           void binary()
    {
        rem;a=0;i=1;
        printf("Enter the decimal number :");
        
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%2;
            n=n/2;
            a=a+rem*i;
            i=i*10;
        }
        printf("Its binary conversion is :%d\n",a);
    }
           void decimal()
    {
        rem;a=0;i=1;
        printf("Enter the binary number :");
        scanf("%d",&n);
        
        
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            a=a+rem*i;
            i=i*2;
        }
        printf("Its decimal conversion is :%d\n",a);
    }
