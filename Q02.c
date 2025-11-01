#include <stdio.h>
int main() {
    int num1,num2,hcf;
    printf("enter two positive integers:");
    scanf("%d \n %d",&num1,&num2);
// for positive input 
    num1 = (num1>0) ? num1 : -num1;
    num2 = (num2>0) ? num2 : -num2;
    
for(int i=1;i<=num1 && i<=num2;i++ ) {
    if(num1%i==0 && num2%i==0) 
    hcf = i;
}    
printf("hcf of two intergers is %d\n",hcf);

return 0;
}