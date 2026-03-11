#include <stdio.h>

int main()
{
    int r,c,sum=0,index=0,min=1e9;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(sum<min && sum!=0){
            min=sum;
            index=i;
        }
    }
    printf("%d",index);
    
    return 0;
}