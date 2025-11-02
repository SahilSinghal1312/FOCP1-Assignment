#include<stdio.h>
int main(){
int n;
int c=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements -\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are: ");      
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j<n; j++) {
            if (arr[i] == arr[j]) {
                c=1;
                printf("%d ", arr[i]);
                break; // Avoid counting the same duplicate more than once
            }
        }
    }
    printf("0");
    printf("\n");
    // for no duplicates in the array
    if(c==0){
        printf("no duplicates are found\n");
    printf("-1\n");
    }
    return 0;
}