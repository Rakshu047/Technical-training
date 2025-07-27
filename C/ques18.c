#include <stdio.h>

int main(){
    int x=5,y;
    y= x++ + ++x;
    printf("%d",y);
    return 0;
}