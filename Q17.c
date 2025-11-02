#include<stdio.h>
int main() {
  int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[100];
    for (int i=0;i<n;i++) {
        printf("enter value:");
        scanf("%d",&arr[i]);        
        }
    printf("--orignal array--");
    printf("\n");    
    for (int i=0;i<n;i++) {
    printf("%d ",arr[i]);
    }printf("\n");
    
    int b;
     printf("enter position at which to be deleted:");
    scanf("%d",&b);
         for(int i=b;i<n-1;i++){
            arr[i]=arr[i+1];
         }
        
         n--;
         printf("array after deleteion element:");
         printf("\n");
         for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
         }
         return 0;
        }

    
    