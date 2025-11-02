#include<stdio.h>
int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    int max=0;
    int min=arr[0];
    for (int i=0;i<n;i++) {
        printf("enter value:");
        scanf("%d",&arr[i]);
        if(arr[i]>max) {
            max=arr[i];
        }
        
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("max score is %d\n",max);
    printf("min score is %d",min);
    return 0;
}