#include<stdio.h>
int main(){
    int number;
    long fact = 1;
    printf("Enter a integer to calculate it's factorial :");
    scanf("%d",&number);
    printf("%d! = %ld\n", number, factorial(number));a
}
long factorial(int n)
{
    int c;
    long result = 1;
    for( c = 1 ; c <= n ; c++ )
        result = result*c;
    return ( result );
}


