#include <stdio.h>

int main() {
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        int sorted=1;
        for(int j=0;j<b-1;j++){
            if(arr[i][j]>arr[i][j+1]){
                sorted = 0;
                break;
            }
        }
        if(sorted==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}