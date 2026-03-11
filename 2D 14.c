#include <stdio.h>

int main() {
    int a,b,sum=0,max=0,index;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){    
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            index=j;
        }
    }
    printf("%d",index);
    return 0;
}