#include <stdio.h>

int main(){
    int n,count=1;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",'A'+(count++)-1);
        }
        printf("\n");
    }
    return 0;
}