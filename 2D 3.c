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
            int s=1;
            for(int k=0;k<c;k++){
                if(j!=k&&arr[i][j]==arr[i][k]){
                    s=0;
                }
            }     
            if(s==1)
            count++;
        }
        if(count>max){
            max=count;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}