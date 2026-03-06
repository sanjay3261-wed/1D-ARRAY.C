#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max1=-100000,max2=-100000;
    int min1=100000,min2=100000;
    for(i=0;i<n;i++) {
        if(arr[i]>max1) {
            max2=max1;
            max1=arr[i];
        } else if(arr[i]>max2) {
            max2=arr[i];
        }
        if(arr[i]<min1) {
            min2=min1;
            min1=arr[i];
        } else if(arr[i]<min2) {
            min2=arr[i];
        }
    }
    int prod1=max1*max2;
    int prod2=min1*min2;
    if(prod1>prod2)
        printf("%d",prod1);
    else
        printf("%d",prod2);
    return 0;
}