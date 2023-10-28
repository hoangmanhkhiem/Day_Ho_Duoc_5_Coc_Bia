#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long k;
    scanf("%lld",&k);
    long long sum = 0;
    long long i;
    for(i=0;i<k;i++){
        long long x;
        scanf("%lld",&x);
        sum += x;
    }
    if(sum == n+2*(k-1)) printf("YES");
    else printf("NO");
}