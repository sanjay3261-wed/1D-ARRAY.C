#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n-1],sum=0;

    for(int i=0;i<n-1;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    int total = n*(n+1)/2;

    printf("%d", total - sum);

    return 0;
}