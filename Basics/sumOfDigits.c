#include <stdio.h>
int main() {

int n,mod, sum=0;
printf("Enter a number:");
scanf("%d", &n);
      while(n>0){
            mod=n%10;
            sum=sum+mod;
            n=n/10;
}
  printf("Sum of digits of entered number=%d", sum);

return 0;
}