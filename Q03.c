#include <stdio.h>
int main() {
    int num1,num2,a,b;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
while(num2!=0) {
    a=(~num1) & num2;
    b= num1 ^ num2 ;
    num2 = a<<1;
}
printf("subtraction of two number is %d\n",b);
return 0;

}