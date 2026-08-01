#include <stdio.h>
 int main() {
    int n, count=0,t;

  printf("Enter any no.\n");
   scanf("%d",&n);
      t=n;
    while(n>0){
        n=n/10;
        count++;
    }

printf("No. of digits in %d=%d", t, count);


      return 0;
}