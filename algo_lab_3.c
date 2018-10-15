#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{

    // 0.1 <= x <= 0.8
    float x=0.1, e=0.0001;
    double sum_n=0, sum_e=0;
    int i, n=50;

    for( ; x <= 0.8; x += 0.07)
    {
        printf("X = %f      \n", x);

        for( i =0 ; i < n; i++)
        {
            sum_n += (cos(2*i*x))/(4*i*i - 1);
        }

        printf("SN = %f        \n", sum_n);

        for( i=0 ; i > -1; i++)
        {
            if (sum_e -((cos(2*i*x))/(4*i*i - 1)) <= 0.0001) break;
            sum_e += (cos(2*i*x))/(4*i*i - 1);
        }
        printf("SE = %f       \n", sum_e);
        printf("Y = %f \n", (0.5 - (pi/4) * fabs( sin(x))));
        printf("\n");
    }

    return 0;

}
