#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n%10==0){
        c=c+1;
        n=n/10;
    }
    printf("No. of trailing zeros :%d\n",c);
}

