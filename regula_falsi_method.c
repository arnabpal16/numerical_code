#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x){
    return ((x*x*x)-9*x+1);
}

int main()
{
    float a,b,c,h;
    printf("enter the value of a:\n");
    scanf("%f",&a);
    printf("enter the value of b :\n");
    scanf("%f",&b);  //input a=2,b=3; ans = 3.965089 something

    if (f(a)*f(b)>0)
    {
        exit(0);
    }
    else
    {
        do
        {
            c=a-(f(a)*f(b-a)/f(b)-f(a));
            if (f(c)<0)     
            {
                a=c;
            }
            else
            {
                b=c;
            }
            h=a-(f(a)*f(b-a)/f(b)-f(a));
            
        } 
        while (fabs(h-c)>0.0001);
        {
            printf("the value is %f",h);
        }
    }
    return 0;
}
