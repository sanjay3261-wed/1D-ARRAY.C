#include<stdio.h>
int main(){
    int r,c,index=0,count=0,max=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        } 
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
                for(int l=0;l<c;l++){
                if(k==i&&l<=j)
                continue;
                if(arr[i][j]==arr[k][l]){
                    printf("%d",arr[i][j]);
                    return 0;
                }
                }
            } 
        }
    }
    return 0;
}