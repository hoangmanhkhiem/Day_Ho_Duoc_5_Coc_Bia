#include<stdio.h>
#include<math.h>
#define int long long
signed main(){
    int n; 
    scanf("%lld", &n);
    n ++;
    int S = sqrt(2*n+0.25)-0.5;
    while(double(S+1)*double(S)/2 < n) S += 1;
    int Sum = S*(S-1)/2 + 1;
    int chenh_lech = n - Sum;
    if(S%2==0){
        int i = chenh_lech + 1;
        int j = S - chenh_lech;
        printf("%lld %lld", i, j);
    }
    else{
        int i = S - chenh_lech;
        int j = chenh_lech + 1;
        printf("%lld %lld", i, j);
    }
}