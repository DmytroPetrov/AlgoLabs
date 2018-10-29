#include <stdio.h>

int main (){
 //insert array
int i, n;
printf("The size of array = ");
scanf("%d", &n);
int a[n+2];
 for ( i = 0; i< n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
// end

// output array begins in a[k]
 int k;

 printf("K = ");
 scanf("%d", &k);
 printf("\n");

 while (k > n )
     {
         k -= n-1 ;
     }

 for (i = 0; i < n; i++, k++)
 {
    if (k == n) k =0;

     printf("a[%d] = %d \n", k, a[k]);
 }
// end

// enlargement array
 for (i = n ; i > 0  ; i--)
 {
     a[i] = a[i -1];
 }

printf("Another a[0] = ");
scanf("%d", &a[0]);

printf("Another a[%d] = ", n+1);
scanf("%d", &a[n+1]);
// END

// output array begins in a[k]
  //take k
 printf("K = ");
 scanf("%d", &k);
 printf("\n");
  // end
  // finding array without pair numbers
 int b[n+2] , l=0;

 for (i = 0; i < n+2; i++)
 {
     if( (a[i] % 2) != 0) {
     b[l] = a[i];
     l++;
     }
 }
  //end
k= k % l;
 for (i = 0; i < l; i++, k++)
 {
    if (k == l) k =0;

     printf("a[%d] = %d \n", k, b[k]);
 }

 //END
}
