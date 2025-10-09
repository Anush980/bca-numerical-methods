#include <stdio.h>
#include <math.h>

#define f(x) (x * x * x + x + 1); // x^3+x+1
#define df(x) (3*x*x+1); //3X^2+1
#define EPS 0.005;

int main()
{
    float x0, x1, error;

    printf("\nEnter initial guesses (x0): ");
    scanf("%f", &x0);
 
    // main program
    while(1){
x1 = x0-f(x0)/df(x0);
error = fabs(x1-x0);
if (error<EPS)
break;

x1=x0;
    }

  
    printf("\nThe approximate root is %.4f\n", x1);
    return 0;
}