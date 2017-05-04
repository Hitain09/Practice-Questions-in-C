#include<stdio.h>
void main(){
    int n,bit,m;
    printf("Enter the decimal number :");
    scanf("%d",&n);
    printf("Enter bit position :");
    scanf("%d",&bit);
    m = n>>(bit-1);
    printf("%dth bit is %d\n",bit,m & 1);
}
