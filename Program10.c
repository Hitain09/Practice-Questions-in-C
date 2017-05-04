#include<stdio.h>
int main(){
    int n,c=0,a;
    printf("Enter any decimal number : ");
    scanf("%d",&n);
    a=n&1;
    while (a==0)
    {
        c=c+1;
        n=n>>1;
        a=n&1;
    }
    printf("No. of trailing zeros in its binary term is : %d\n",c);
}

