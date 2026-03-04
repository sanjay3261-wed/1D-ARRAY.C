#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int leaders[n];
    int count = 0;

    int max = a[n-1];

    leaders[count++] = max;

    for(int i=n-2;i>=0;i--) {
        if(a[i] > max) {
            max = a[i];
            leaders[count++] = max;
        }
    }

    
    for(int i=count-1;i>=0;i--)
        printf("%d ", leaders[i]);

    return 0;
}