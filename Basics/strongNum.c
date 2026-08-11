#include <stdio.h>
int main() {
int i,n,fac,sum=0,d,t;
printf("Enter any number\n");
scanf("%d",&n);
  t=n;
while(n>0){ 
      i=1;
      fac=1;
      d=n%10;
    while(i <= d){ 
      fac=fac*i;
      i++;
    }
      n=n/10;
      sum=sum+fac;
  }


  if(sum == t){
   printf("%d is strong no.",t);
  }
  else{ 
   printf("%d is not strong no.",t);
  }

return 0;
}