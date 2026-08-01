#include <stdio.h>

int n;
int e[10][10];
int visited[10];

void eclosure(int state)
{
    int i;

    if(visited[state])
        return;

    visited[state] = 1;

    printf("q%d ", state);

    for(i=0;i<n;i++)
    {
        if(e[state][i]==1)
            eclosure(i);
    }
}

int main()
{
    int i,j;

    printf("Enter number of states: ");
    scanf("%d",&n);

    printf("Enter epsilon transition matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&e[i][j]);
        }
    }

    printf("\nEpsilon Closures\n\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            visited[j]=0;

        printf("ε-closure(q%d) = { ",i);
        eclosure(i);
        printf("}\n");
    }

    return 0;
}
