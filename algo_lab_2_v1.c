#include <stdio.h>
#include <math.h>

// function for calculating factorial
int factorial(f){

    float f_done = f;

    if (f > 0){

        for (int i = 1; i != f; i++){

            f_done *= f-i;

        }

    }else f_done = 1;
return(f_done);
}


int main(){

    int a = 1; // the formula when n = 1
    float sum;
    for (int i = 1; i>0; i++){

// calculating a 0f n with a of 1 multiplying on recurrent formula
        float f= a * (pow(i+1, 3)/ (pow(i,3) * 3*i * (3* i -1) * (3* i -2)));
        sum += f;
        printf("%f\n", f);
        if (f < 0.0001) break;

    }

    printf("\n%f", sum);

}
