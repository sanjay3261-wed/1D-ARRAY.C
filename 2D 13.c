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
        int start=0,end=b-1,p=1;
        while(start<end){
            if(arr[i][start]!=arr[i][end]){
                p=0;
                break;
            }
            start++;
            end--;
        }
        if(p==1)
        count++;
    }
    printf("%d",count);
    return 0;
}