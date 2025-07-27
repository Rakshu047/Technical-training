#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==3 || i==5){
            for(int j=1;j<=5;j++){
                printf("* ");
            }
        }else{
            for(int j=1;j<=5;j++){
                if((i<=3 && j==5) || (i>3 && j==1)){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}