#include <stdio.h>
int main()
{
    int j, i, n;
    float y[10][10], x[10], p, q, h, sum, u;
    printf("Enter the numbers of row:");
    scanf("%d", &n);
    printf("Enter value of column elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Y(%d)=", i + 1);
        scanf("%f", &y[i][0]);
    }
    printf("Enter value of column elements for x:");
    for (i = 0; i < n; i++)
    {
        printf("X(%d)=", i + 1);
        scanf("%f", &x[i]);
    }
    // calculate backward difference
    for (i = 1; i < n; i++)
    {
        for (j = n - 1; j > i - 1; j--)
        {
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%.2f", y[i][j]);
        }
        printf("\n");
    }

    return 0;
}