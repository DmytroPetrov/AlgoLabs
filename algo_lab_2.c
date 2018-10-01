#include <stdio.h>
#include <math.h>>

/* here below is function for making factorials */
int factorial (f){

    int f_done;
    if (f == 0)
        f_done = 1;
    else {
        for (int i = 0; i < f; i++){

            f_done = f*(f-i);
        }
    }
    return(f_done);
}

int main(){

    int n;
    float sum;
    scanf("%d", &n);
    float a[n];
    for (int i = 1; i<=n; i++) {

        int fact = factorial(3*i- 3);
        printf("fact= %d\n", fact); // checks factorial of a number


        a[i]=   pow(i,3)/ fact;
        printf("%f\n", a[i]); // checks variables
        sum += a[i-1]+ a[i];
    }



    printf("%.4f", sum);
}
