#include<stdio.h>
int main() {
int rows=5;
for(int i=1;i<=5;i++) {
    for(int j=1;j<=i;j++) {
        if(j%2 != 0) 
            printf("0");
            else 
            printf("1");
    }
    for(int a=1;a<=5-i;++a) {
        printf("  ");
    }
    
    for(int j=1;j<=i;j++) {
        if(j%2 != 0) 
            printf("0");
            else 
            printf("1");
    }

    printf("\n");
}
return 0;
}