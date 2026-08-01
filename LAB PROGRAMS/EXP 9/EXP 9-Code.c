#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter the string: ");
    scanf("%s", str);

    if(strcmp(str,"a")==0 ||
       strcmp(str,"ac")==0 ||
       strcmp(str,"bac")==0)
    {
        printf("String Accepted\n");
    }
    else
    {
        printf("String Rejected\n");
    }

    return 0;
}