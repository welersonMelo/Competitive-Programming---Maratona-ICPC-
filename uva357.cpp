#include<bits/stdc++.h>
using namespace std;
int n, coin[] = {50, 25, 10, 5, 1}, m =5;
long long int memo[6][30002];

long long int solve(int i, int val){
    if(val == 0) return 1;
    if(val < 0) return 0;
    if(i == m && val > 0) return 0;
    if(memo[i][val] != -1) return memo[i][val];

    return memo[i][val] = solve(i, val-coin[i]) + solve(i+1, val);
}

int main(){

    while(scanf("%d", &n)){
        memset(memo, -1, sizeof memo);
        long long int r = solve(0,n);
        if(r == 1) printf("There is only 1 way to produce %d cents change.\n", n);
        else printf("There are %lld ways to produce %d cents change.\n", r, n);
    }

    return 0;
}
