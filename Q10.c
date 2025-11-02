#include <stdio.h>
int main() {
    int marks[10]={99,77,88,99,56,76,99,44,97,99};
    int count=0;
    for(int i=0;i<10;i++) {
        if(marks[i]==99){
            count++;
        }
    }
printf("total number of students who scored 99 are %d",count);
printf("\n");
// to know who are these students through their index
printf("---students--- ");
printf("\n");
for(int i=0;i<10;i++) {
    if(marks[i]==99) {
        printf("student at index %d",i);
        printf("\n");
    }

}
    return 0;
}