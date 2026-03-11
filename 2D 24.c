#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        int allPrime=1;
        for(int j=0;j<c;j++){
            int num = arr[i][j];
            int prime = 1;
            if(num <= 1)
                prime = 0;
            for(int k=2;k<=num/2;k++){
                if(num % k == 0){
                    prime = 0;
                    break;
                }
            }
            if(prime == 0){
                allPrime = 0;
                break;
            }
        }
        if(allPrime == 1)
            count++;
    }
    printf("%d",count);
    return 0;
}