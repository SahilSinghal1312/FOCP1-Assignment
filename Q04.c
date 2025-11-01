#include <stdio.h>
int main() {
    int num1,num2,a;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
   // ------ METHOD 1 using temporary variable a 
   printf("before swapping:num1=%d,num2=%d\n",num1,num2);
   a=num1;
   num1=num2;
   num2=a;
   printf("method1 after swapping : num1 is %d , num2 is %d\n",num1,num2);
   printf("\n");
    
   // METHOD 2 by arithmetic 
   printf("before swapping:num1=%d,num2=%d\n",num1,num2);
   num1=num1+num2;
   num2=num1-num2;
   num1=num1-num2;
   printf("method 2 after swapping : num1 is %d , num2 is %d\n",num1,num2);
   printf("\n");

   //METHOD 3 using pointers
   int b=5,c=9,d;
   int *bptr=&b;
   int *cptr=&c;
   d=*bptr;
   *bptr=*cptr;
   *cptr=d;
    printf("METHOD 3 pointers");
    printf("value of num1 b is %d\n",*bptr);
    printf("value of num2 c is %d",*cptr);
    printf("\n");

    //METHOD 4 using bitwise 
    printf("before swapping:num1=%d,num2=%d\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
       printf("method 4 after swapping : num1 is %d , num2 is %d\n",num1,num2);
return 0;
}