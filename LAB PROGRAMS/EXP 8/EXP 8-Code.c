#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the binary string: ");
    scanf("%s", str);

    if(strstr(str, "101") != NULL)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}