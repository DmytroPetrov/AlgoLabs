#include <stdio.h>
#include <math.h>

int main() {

 float b=0.0001000, c, a=1000.0000000,k;

  c= pow(a-b, 3);
 printf("%f\n",c); //For checking definition of variables

 c-= pow(a, 3);
 printf("%f\n",c);

 k=pow(b, 3);
 printf("%f\n",k);

 k -= 3*a*pow(b, 2);
 printf("%f\n",k);

 k -= 3*b*pow(a, 2);
 printf("%f\n",k);

 c/=k;
printf("%f", c);
return 0;
}
