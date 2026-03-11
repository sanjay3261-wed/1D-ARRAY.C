#include <stdio.h>

int main() {
    int a,b,value,maxcount=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int count=0;
            for(int k=0;k<a;k++){
                for(int l=0;l<b;l++){
                    if(arr[i][j] == arr[k][l]){
                    count++;
                    }
                }
            }
            if(count>maxcount){
                maxcount=count;
                value=arr[i][j];
            }
        }
    }
    printf("%d",value);
    return 0;
}