#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter any integer : ");
    scanf("%d",&n);
    while(n!=0){
        if(n&1==1)
            a++;
        n=n>>1;
    }
    if(a==1)
        printf("Entered integer is a power of 2\n");
    else
        printf("Entered integer is not a power of 2\n");

}

