#include<bits/stdc++.h>
using namespace std;
#define INFINITO 1000000000
int m,n, coin[10] = {5, 10, 20, 50, 100, 200}, coinMax[10];

long long int memo[10][550];

long long int solve(int i, int coinAt, int val){
    if(val == n) return 0;
    if(val > n) return INFINITO;
    if(val < n && i==m) return INFINITO;
    //if(coinAt == coinMax[i]) return INFINITO;
    if(memo[i][val] != -1) return memo[i][val];
    //printf("%d\n", coin[i]);

    //for(int j=0;j < m || coin[j]<=n;j++)
    return memo[i][val] = 1 + min(solve(i, coinAt+1 , val+coin[i]),solve(i+1, 0 , val));

}

int main(){

    while(1){

        //scanf("%d%d%d%d%d%d", &coinMax[0], &coinMax[1], &coinMax[2], &coinMax[3], &coinMax[4], &coinMax[5]);
        //if(coinMax[0] == 0 && coinMax[1] == 0 && coinMax[2] == 0 && coinMax[3] == 0 && coinMax[4] == 0 && coinMax[5] == 0) return 0;
        scanf("%d.%d", &m, &n);

        n = m*100+n;
        m = 6;

        memset(memo, -1, sizeof memo);

        printf("%3lld\n", solve(0,0,0));
    }

    return 0;
}

