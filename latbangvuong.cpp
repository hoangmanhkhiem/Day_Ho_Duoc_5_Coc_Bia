#include<stdio.h>
#define int long long
signed main(){
    int n; 
    scanf("%lld",&n);
    int q;
    scanf("%lld",&q);
    while(q--){
        int x;
        scanf("%d",&x);
        x --;
        int row = x/n;
        int col = x - row * n;
        printf("%lld ",col*n + row + 1);
    }
}