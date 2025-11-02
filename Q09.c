#include <stdio.h>
int main() {
    int arr[6]={45,78,88,99,34,99};
    int score=99;
    int c=-1;

    for(int i=0;i<6;i++) {
        if(arr[i]==score) {
            c=i;
        break;
        }
    }
if(c!= -1) {
    printf("found at index %d\n",c);
}
else{
    printf("not found ");
}
    return 0;
}