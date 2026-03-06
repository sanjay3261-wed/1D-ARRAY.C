#include <stdio.h>
int main() {
    int n,i,j,count=0,unique;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        unique=1;
        for(j=0;j<i;j++) {
            if(arr[i]==arr[j]) {
                unique=0;
                break;
            }
        }
        if(unique)
            count++;
    }
    printf("%d", count);
    return 0;
}