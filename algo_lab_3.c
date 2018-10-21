#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{

    // 0.1 <= x <= 0.8
    float x=0.1, e=0.0001;
    double sum_n=0, sum_e=0 , buff;
    int i, n=50;

    for( ; x <= 0.8; x += 0.07)
    {
        printf("X =  %f      \n", x);

        for( i =1 ; i <= n; i++)
        {
            sum_n += cos(2*i*x)/(4*i*i - 1);
        }

        printf("SN = %f        \n", sum_n);
        sum_n=0;

        for( i=1 ; i > -1; i++)
        {
            buff = ((cos(2*(i - 1)*x))/(4*(i - 1)*(i - 1) - 1));
            if (fabs((cos(2*i*x))/(4*i*i - 1)- buff) <= 0.0001) break;
            sum_e += (cos(2*i*x))/(4*i*i - 1);
        }
        printf("SE = %f       \n", sum_e);
        sum_e=0;
        printf("Y =  %f \n", (0.5 - (pi/4) * fabs( sin(x))));
        printf("\n");
    }

    return 0;

}
