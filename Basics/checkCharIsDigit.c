#include<stdio.h>
int main() {
char ch;
printf("Enter any character:\n");

scanf("%c",&ch);

if(ch>='0' && ch <= '9'){
     printf("Entered character is digit");
     }else{
     printf("Entered character is not a digit");
     }
return 0;
}