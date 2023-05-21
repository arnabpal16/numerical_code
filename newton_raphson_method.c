// #include <stdio.h>
// #include <math.h>

// float f(float);
// float derivative(float);

// float f(float x) { // f(x)
// 	return ((x*x*x)-9*x+1);
// }

// float derivative(float x) { // f'(x)
// 	return 3*x*x-9;
// }


// int main() {
// 	float x; // x: approximation
// 	int  i = 1, n; // n: number of iterations

// 	printf("FIRST APPROXIMATION: ");
// 	scanf("%f", &x);

// 	printf("ITERATIONS: ");
// 	scanf("%d", &n);

// 	while(i <= n) {
// 		x = x - f(x)/derivative(x);
// 		i++;
// 	}

// 	printf("APPROXIMATE ROOT: %f \n", x);
// 	return 0;
// }
#include<stdio.h>
#include<math.h>
 float f(float);
 float derivative(float );

 float f(float x){
    return ((x*x*x)-9*x+1);
 }
  float derivative(float x){
    return (3*x*x)-9;
}

int main(){
    float x; //number of approximation;
    int i,n; //n=number of iterration;

    printf("enter the first approximation :\n");
    scanf("%f",&x);

    printf("enter the first itteration :\n");
    scanf("%d",&n);

    while (i<=n)            
    {
       x=x-f(x)/derivative(x);
       i++;
    }

    printf("approximate root :%f\n",x);
    return 0;
}



