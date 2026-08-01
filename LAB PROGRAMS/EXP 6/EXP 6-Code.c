#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, left = 0, right = 0;
    int i, j;

    printf("Enter the binary string: ");
    scanf("%s", str);

    len = strlen(str);

    i = 0;
    while(i < len && str[i] == '0')
    {
        left++;
        i++;
    }

    j = len - 1;
    while(j >= 0 && str[j] == '0')
    {
        right++;
        j--;
    }

    if(left != right)
    {
        printf("String Rejected\n");
        return 0;
    }

    for(i = left; i <= j; i++)
    {
        if(str[i] != '1')
        {
            printf("String Rejected\n");
            return 0;
        }
    }

    printf("String Accepted\n");

    return 0;
}