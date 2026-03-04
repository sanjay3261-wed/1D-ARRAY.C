#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int total=0;
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
         total+=arr[i];
    }
    int leftsum=0;
    for(int i=0;i<n;i++){
        int rightsum=total-leftsum-arr[i];
        if(leftsum==rightsum){
            printf("%d",i);
            return 0;
    }
    leftsum+=arr[i];
    }
printf("-1");
return 0;
}