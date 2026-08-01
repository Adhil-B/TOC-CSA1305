#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    int countA = 0, countB = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    i = 0;

    while(i < len && str[i] == 'a')
    {
        countA++;
        i++;
    }

    while(i < len && str[i] == 'b')
    {
        countB++;
        i++;
    }

    if(i == len && countA == countB)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}