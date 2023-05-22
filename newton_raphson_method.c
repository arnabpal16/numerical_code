#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x)
{
    return ((x*x*x)-9*x+1);
}
float derivative(float x)
{
    return (3*x*x)-9;
}
int main()
{
    float a,b,e,x;
    
    printf("enter the desired accurcay:\n");
    scanf("%f",&e);
    printf("enter the initial value of a:\n");
    scanf("%f",&a);
    printf("the value of x is: \n");
    do{
        b=a;
        x=a-(f(a)/derivative(a));
        printf("%f\n",x);
        a=x;
    }
    while(fabs(b-a)>e);
    {
        printf("the root is %f",x);
    }
    return 0;
    
}

