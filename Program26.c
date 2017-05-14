#include<stdio.h>
#include<string.h>

main()
{char source[100];
    char Destination[100];
    
    printf("Enter the string\n");
    gets(source);
    
    strcpy(Destination,source);
    
    printf("The string at Source is %s\n",source);
    printf("The string at Destination is %s\n",Destination);
}
