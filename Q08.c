#include <stdio.h>
int main() {
    int n,a=0,b=1,c;
    printf("enter n:");
    scanf("%d",&n);
    printf("---fibonacci series---");
    printf("%d,%d,",a,b);
    for(int i=2;i<n;i++) {
        c=a+b;
        a=b;
        b=c;
        printf("%d,",c);

    }
printf("....\n");

    return 0;
}
