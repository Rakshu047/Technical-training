#include <stdio.h>

void func(int p) {
    p = 100;
}
int main(){
    int x=50;
    func(x);
    printf("%d\n", x);
    return 0;
}