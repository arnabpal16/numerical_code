#include<stdio.h>
int main(){
    int n,j,i;
    float h,p,sum,u,q,a[10][10],x[10];
    printf("enter the numbers of row:");
    scanf("%d",&n);
    printf("Enter the number of column elements of Y \n");
    for( j=0;j<n;j++){
        printf("F([%d])=",j+1);
        scanf("%f",&a[j][0]);
    }
   printf("enter the values of X \n");
   for(j=0;j<n;j++){
    printf("X([%d])",j+1);
    scanf("%f",&x[j]);
   }
   //Calculate the difference table
   for(j=1;j<n;j++){
    for(i=0;i<n-j;i++){
        a[i][j]=a[i+1][j-1]-a[i][j-1];
        printf("a[%d][%d]=a[%d][%d] - a[%d][%d] \n",i,j,i+1,j-1,i,j-1 );
    }
   }

   //printing the difference table
   for(j=0;j<n;j++){
    for(i=0;i<n-j;i++){
        printf("%.2f\t",a[j][i]);
    }
    printf("\n");
   }

   float inter_point;
   printf("Enter interpolation point:");
   scanf("%f",&inter_point);
   h=x[1]-x[0];
   u=(inter_point-x[0])/h;
   sum=a[0][0];
   p=1.0;
   for(j=1;j<n;j++){
    p=p*(u-j+1)/j;
    sum=sum+p*a[0][j];

   }
   printf("Sum is-[%f]",sum);

}