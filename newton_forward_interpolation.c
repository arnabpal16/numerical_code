#include <stdio.h>
void fo(float x[4],float y[4][4], int x)
{
    float a ;
    float h,u,sum,p;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-j; i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    printf("the forward table is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n-1; j++)
        {
            printf("%f",y[i][j]);
        }
        
    }
    printf("entert the interpolation point\n");
    scanf("%f",&a);
    p=1.00;
    
    
}