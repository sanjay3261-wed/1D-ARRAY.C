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
    int minindex=0;
    int minsum=0;
    for(int j=0;j<c;j++){
        minsum+=arr[0][j];
        for(int i=0;i<r;i++){
            int sum=0;
            for(int j=0;j<c;j++){
                sum+=arr[i][j];
            }
                if(sum<minsum){
                    minsum=sum;
                    minindex=i;
                }
            } 
           
    }
     printf("%d",minindex);
    return 0;
}