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
    int a;
    printf("enter number to be inserted:");
    scanf("%d",&a);
    
    int b;
     printf("enter position at which to be inserted:");
    scanf("%d",&b);
         for(int i=n-1;i>=b;i--){
            arr[i+1]=arr[i];
         }
         arr[b]=a;
         n++;
         printf("array after inserted element:");
         printf("\n");
         for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
         }
         return 0;
        }

    
    