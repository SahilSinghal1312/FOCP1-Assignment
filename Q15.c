#include<stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    int last_el=arr[4];
    for(int i=4;i>0;i--) {
        arr[i]=arr[i-1];
    }
arr[0]=last_el;
printf("orignal array: 1 2 3 4 5 ");
printf("\n");

printf("rotated array:");
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
printf("\n");
    return 0;
}