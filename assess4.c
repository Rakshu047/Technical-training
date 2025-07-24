#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,i,j,k=0;
    scanf("%d%d",&x,&y);
    int *a= (int*)malloc(x*sizeof(int));
    int *b= (int*)malloc(y*sizeof(int));

    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<y;i++)
        scanf("%d",&b[i]);

    int *c = (int*)malloc((x+y)*sizeof(int));

    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(a[i]==b[j]){
                c[k++] = a[i];
            }
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
}