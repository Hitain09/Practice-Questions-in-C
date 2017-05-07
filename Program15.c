#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    gcd(a,b);
}
void gcd(int a,int b)
{
    int q,rem;
    while (a!=0 && b!=0){
        q=a/b;
        rem=a%b;
        a=b;
        b=rem;
    }
    if(a==0){
        printf("GCD is %d\n",b);
    }
    else if (b==0){
        printf("GCD is %d\n",a);
    }}




