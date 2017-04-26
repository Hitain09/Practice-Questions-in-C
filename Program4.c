#include<stdio.h>
int main()
{
    int a;
    char b;
    double e;
    short f;
    long g;
    float d;
    printf("size of int : %ld\n",sizeof(int));
    printf("size of char : %ld\n",sizeof(b));
    printf("size of float : %ld\n",sizeof(d));
    printf("Size of short : %ld\n",sizeof(f));
    printf("Size of long : %ld\n",sizeof(g));
    printf("size of slash n: %ld\n",sizeof("\n"));
    printf("Size of double : %ld\n",sizeof(e));
    printf("Size of long double :%ld\n",sizeof(g));
    printf("size of void : %ld\n",sizeof(void));
}
