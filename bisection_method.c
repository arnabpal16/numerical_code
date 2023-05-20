// #include<stdio.h>
// #include<math.h>
// float f(float x)
// {
//     return ((x*x*x)-9*x+1);
// }
// int main()
// {
//     float a,b,c,h;
//     printf("enter the lower and upper bounds \n");
//     scanf("%f %f",&a,&b);
//     if(f(a)*f(b)>0.0)
//     {
//         exit(0);
//     }
//     else
//     {
//         do
//         {
//             c=(a+b)/2;
//             if(f(c)<0)
//             a=c;
//             else
//             b=c;
//             h=(a+b)/2;
//         }
//         while (f(h-c)>0.0001);
//         {
//             printf("root is : %f",h);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// float f(float x)
// {
//     return ((x*x*x)-9*x+1);
// }
// int main()
// {
//     float a,b,c,h;
//     printf("enter the upper nad lower bounds :\n");
//     scanf("%f %f",&a ,&b);
//     if (f(a)*f(b)>0.0)
//     {
//         exit(0);
//     }
//     else
//     {
//         do
//         {
//             c=(a+b)/2;
//             if(f(c)<0.0)
//             {
//                 a=c;
//             }       
//             else
//             {
//                 b=c;
//             } 
//             h=(a+b)/2;
//         }
//         while (f(h-c)>0.0001);
//         {
//             printf("the root is %f",h);
//         }
//     }
// }
        
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return ((x*x*x)-9*x+1);
}
int main()
{
    float a,b,c,h;
    printf("enter the uppet and lower bound :\n");
    scanf("%f %f",&a ,&b);
    if(f(a)*f(b)>0.0)
    {
        exit(0);
    }
    else
    {
        do
        {
            c=(a+b)/2;
            if(f(c)<0)
            {
                a=c;
            }
            else
            {
                b=c;
            }
            h=(a+b)/2;
        } 
        while (f(h-c)>0.0001);
        {
            printf("the root is %f",h);
        }
    }
    return 0;
}