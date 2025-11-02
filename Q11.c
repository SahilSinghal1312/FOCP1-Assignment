#include<stdio.h>
int main() {
        int n,evenc1=0,oddc2=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    int even_array[n];
    int odd_array[n];

    for (int i=0;i<n;i++) {
        printf("enter value:");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0) {
            even_array[evenc1]=arr[i];
            evenc1++;
          }  else {
            odd_array[oddc2]=arr[i]; 
            oddc2++; 
        }
        }
printf("total even numbers are %d\n",evenc1);
printf("total odd numbers are %d",oddc2);  
printf("\n");

//to print even and odd array
printf("EVEN ARRAY\n");
for (int i=0;i<evenc1;i++) {
    printf("%d ", even_array[i]);
}printf("\n");
printf("ODD ARRAY\n");
for(int i=0;i<oddc2;i++) {
   printf("%d ",odd_array[i] );
}


    return 0;
}