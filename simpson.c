#include <stdio.h>
#include<math.h>

float f(float x)
{
    return (x+(1/x));     //input-->  a=1.2; b=1.6; n=8;
}
int main()                            //ans-->0.8 something
{
    float a, b, h, sum = 0.0, x, integral;
    int i, n;
    printf("Enter the limt of the intigration a and b : \n");
    scanf("%f %f", &a, &b);

    printf("Enter the number of divisors: \n");
    scanf("%d", &n);

    h = (b - a) / n;

    for (i = 1; i < n ; i++)
    {
        x = a+(i*h);
        if(i%2 == 0)
        {
            sum = sum+(2*f(x));
        }
        else
        {
            sum = sum + (4*f(x));
        }
    }
    integral = (h/3)*((f(a)+f(b)+sum));
    printf("The value of integral is %.2f", integral);

    return 0;
}
