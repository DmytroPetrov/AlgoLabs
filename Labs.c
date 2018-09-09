#include <stdio.h>

int main(){
 int a, m=3, n=2;
 //task 1
 a= n++*m;
 printf("n=%d\n",n);//checking n after the operation
 printf("%d\n", a);

 printf("Task 2\n");//task 2
 a= n++<m;
 printf("n=%d\n",n);//checking n after the operation
 printf("%d\n", a);

 printf("Task 2\n");//task 3
 a=m-- >m;
 printf("m=%d\n",m);//checking m after the operation
 printf("%d\n", a);
return 0;
}
