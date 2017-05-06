#include<stdio.h>
int main(){
    int a,b;
    printf("enter the no. a & b\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("orignal no. is %d%d\n",a,b);
}
void swap(int t,int z)
{
    t = t ^ z;
    z = t ^ z;
    t = t ^ z;
    printf("swapped no. is %d%d\n", t, z);
}

