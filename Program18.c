#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter any number :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=pow(b,3)+pow(d,3)+pow(e,3);
    if(a==f)
    {
        printf("armstrong number\n");
    }
    else
    {
        printf("not an armstrong number\n");
    }
}
