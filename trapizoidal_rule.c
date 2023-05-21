#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x);

float f(float x){
    float y;
    y=x/cos(x);
    return y;
}

int main(){
    float h,a,b,x[100],y[100],temp,sum=0;
    int i,n;
    printf("enter the lower and upper limit a and b:\n");
    scanf("%f %f",&a,&b);
    printf("enter the interval n:\n");
    scanf("%d",&n);
    h=(b-a)/n;
    for ( i = 0; i <= n; i++)
    {
        x[i]=a+(i*h);
        y[i]=f(x[i]);
    }
    for ( i = 1; i <= n; i++)
    {
        temp=y[i]+temp;
    }
    sum=h/2*(y[0]+y[n]+2*temp);
    printf("the desired value is : %f",sum);
    
}
