#include <stdio.h>

int main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int n=arr[i][j];
            int prime=1;
            if(n<=1)
                prime=0;
            for(int k=2;k<=n/2;k++){
                if(n % k == 0){
                    prime = 0;
                    break;
                }
            }
            if(prime==1)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}