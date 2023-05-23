#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
    return ((x * x * x) - (9 * x) + 1);
}
float df(float x)
{

    return ((3 * x * x) - 9);
}
int main()
{
    float a, b, e, x;
    printf("enter the initial value of x:");
    scanf("%f", &x);
    printf("Enter the accureacy:");
    scanf("%f", &a);
    do
    {
        b = a;
        x = a - f(a) / df(a);
        printf("enter the accuracy:");
        scanf("%f", &e);
    } while (fabs(b - a) > e);
    printf("the value of root is %f", x);

    return 0;
}