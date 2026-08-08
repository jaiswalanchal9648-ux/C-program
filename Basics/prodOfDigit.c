#include <stdio.h>
int main(){
int n,mod,product=1;
printf("Enter a number:");
scanf("%d",&n);
  while(n>0){
      mod=n%10;
      product=product*mod;
      n=n/10;
}
printf("Product of entered number= %d", product);

return 0;
}