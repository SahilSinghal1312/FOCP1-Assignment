#include<stdio.h>
int main() {
  int n,c1=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        printf("enter value:");
        scanf("%d",&arr[i]);        
        }
    for (int i=0;i<n;i++) {
    printf("%d ",arr[i]);
    }printf("\n");
    for (int i = 0;i<n;i++) {
        int num = arr[i];
        int c = 1; 

        if (num <= 1) {
        } else {
           
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    c = 0; 
                    break;
                }
            }
        }

        if (c == 1) {
            c1++;
        }
    }

    printf("Number of prime numbers in the array: %d\n",c1);
    return 0;
}

