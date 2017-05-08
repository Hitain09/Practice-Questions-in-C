#include<stdio.h>
int a,b=1,c,n;
void fibo();
int main()
{
    printf("enter the highest no. you want to print of fibonacci series\n");
    scanf("%d",&n);
    printf("0,1");
    fibo();
}
void fibo()
{
    a=0;b=1;c=0;
    while(c<n)
    {
        c=a+b;
        printf(",%d",c);
        a=b;
        b=c;
    }
}

