#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter the numver of arguments:\n");
    scanf("%d",&n);
    float x[n],y[n],sum=0,a,p;
    printf("enter the array of a :\n");  //inputs--> arguments =4, x[i]={1,2,4,5} ; y[i]={2,9,65,126}
    for(i=0;i<n;i++){                           //ans=28.00004;
        scanf("%f",&x[i]);
    }
    printf("enter the array of y :\n");
    for(i=0;i<n;i++){
        scanf("%f",&y[i]);
    }
    printf("enter the interpolating point :\n");
    scanf("%f",&a);
    for(i=0;i<n;i++){
        p=1;
        for(j=0;j<n;j++){
            if(i!=j)
            p=p*(a-x[j])/(x[i]-x[j]);
        }
        sum=sum+p*y[i];
    }
    printf("lagrange interpolationg value  %f",sum);
    return 0;
}
