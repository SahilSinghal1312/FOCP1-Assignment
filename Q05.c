#include <stdio.h>
int main() {
int x,y;
printf("enter x coordinates:");
scanf("%d",&x);
printf("enter y coordinates:");
scanf("%d",&y);
if(x>0 && y>0){
    printf("first quadrant");
 } else if(x<0 && y>0) {
printf("second quadrant");
    }
else if(x<0 && y<0){
printf("third quadrant");
    }
    else if(x>0 && y<0){
printf("fourth quadrant");
    }
else if(x==0){
printf("point lies on y axis ");
    }
    else {
        printf("point lies on x axis");
    }


return 0;
}