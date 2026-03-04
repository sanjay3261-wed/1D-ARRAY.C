#include<stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&k);

    for(int i=0;i<k;i++) {
        int first = a[0];

        for(int j=0;j<n-1;j++)
            a[j]=a[j+1];

        a[n-1]=first;
    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}