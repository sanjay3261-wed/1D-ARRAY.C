#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int start=0,end=n-1,temp;

    while(start<end) {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;

        start++;
        end--;
    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}