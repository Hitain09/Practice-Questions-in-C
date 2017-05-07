#include<stdio.h>
int main(){
    int num,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    sum = Palindrome(num);
    if(num==sum)
        printf("%d is a palindrome\n",num);
    else
        printf("%d is not a palindrome\n",num);
}
int Palindrome(int num){
    static int sum=0,r;
    if(num!=0){
        r=num%10;
        sum=sum*10+r;
        Palindrome(num/10);
    }
    return sum;
}



