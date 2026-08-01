#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, zeros = 0, ones = 0, i;

    printf("Enter the binary string: ");
    scanf("%s", str);

    len = strlen(str);

    i = 0;

    while(i < len && str[i] == '0')
    {
        zeros++;
        i++;
    }

    while(i < len && str[i] == '1')
    {
        ones++;
        i++;
    }

    if(i == len && zeros == ones)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}