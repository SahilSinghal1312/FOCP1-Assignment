#include <stdio.h>
int main() {
    int num,orignalnum,remainder,n=0;
    int result=0;
    printf("enter number:");
    scanf("%d",&num);
    orignalnum=num;

    while(orignalnum!=0) {
        orignalnum/=10;
        n++;
    }
    orignalnum=num;
    while(orignalnum!=0) {
        remainder = orignalnum % 10;
        int a=1;
        for(int i=0;i<n;i++) {
            a *= remainder;
        }
 
        result += a;
        orignalnum /= 10;
}
if(result == num) 
printf("ARMSTRONG");
else 
printf("NOT ARMSTRONG");

return 0;
}