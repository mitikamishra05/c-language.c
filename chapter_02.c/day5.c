#include <stdio.h>

int main(){
    int length, breadth;
    printf("enter the length of the rectangle \n");
    scanf("%d", &length);

    printf("enter the breadth of the rectangle \n");
    scanf("%d", &breadth);
    
    printf("the area of a rectangle is %d", length*breadth);
    return 0;
}