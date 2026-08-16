#include<stdio.h>
int main() {
int a,b;
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
if(a>b){
printf("smallest no. is %d",b);
}else{
printf("smallest no. is %d",a);
}
return 0;
}