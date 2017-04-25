#include<stdio.h>
int main(){
    float a;
    printf("Enter the number :");
    scanf("%f",&a);
    printf("Float is : %f \n",a);
    double b = 0.0;
    b = (double)a;
    printf("Its Double is : %f \n",b);
}
