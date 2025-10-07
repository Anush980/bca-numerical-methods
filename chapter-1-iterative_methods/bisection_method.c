#include <stdio.h>
#include <math.h>

#define f(x) (x * x * x + x + 1) // x^3+x+1

int main()
{
    float xl, xu, xm, fxl, fxu, fxm, error;

    printf("\nEnter the first two initial guesses (xl and xu): ");
    scanf("%f%f", &xl, &xu);
    printf("\nEnter the Error tolerance: ");
    scanf("%f", &error);
    // check for the valid guesses
    if (f(xl) * f(xu) > 0)
    {
        printf("\nTry guessing again.\nThe f(xl) and f(xu) must have oppostive sign.");
        return 0;
    }
    // main program
    while (1)
    {
        xm = (xl + xu) / 2;
        fxl = f(xl);
        fxm = f(xm);

        if (fabs(fxm) < error || fabs((xu - xl) / 2) < error)
        {
            break;
        }
        if (fxl * fxm < 0)
        {
            xu = xm;
        }
        else
        {
            xl = xm;
        }
    }
    printf("\nThe approximate root is %.4f\n", xm);
    return 0;
}