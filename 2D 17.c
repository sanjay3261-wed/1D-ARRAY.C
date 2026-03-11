#include <stdio.h>

int main(){
    int r,c,count=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            if(i!=j){
                sum+=arr[i][j];
            }
        }
        if(arr[i][i] > sum){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}