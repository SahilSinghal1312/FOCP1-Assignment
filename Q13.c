#include<stdio.h>
int main() {
    int arr[5]={3,4,5,6,2};
    int a=0;
        if(arr[0]>arr[1]) {
            printf("peak element is %d",arr[0]);
            a=1;
        }
        if(a==0) {
            for(int i=1;i<4;i++) {
                if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) {
                    printf("peak element is %d",arr[i]);
                    a=1;
                    break;
                }
            }
        }
        if(arr[4]>=arr[3]) {
            printf("peak element is %d",arr[4]);
            a=1;
        }
        if(a==0)
        printf("no peak element is there");
    return 0;
}