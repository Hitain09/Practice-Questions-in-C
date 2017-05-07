#include<stdio.h>
void prime();
int i,j,c,k,n;
int main()
{ prime(); }
void prime()
{ i=1;c=0;k=0;
    printf("No. of prime no. you want to print : ");
    scanf("%d",&n);
    while (c<n)
    {
        for (j=1;j<=i;j++)
        {
            if(i%j==0){
                k=k+1 }
        }
        if(k==2){
            printf("%d , ",i);
            c=c+1;
        }
        i=i+1;
        k=0}}




