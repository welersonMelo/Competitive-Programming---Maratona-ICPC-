#include<bits/stdc++.h>
using namespace std;
int t,n, q[105], p[105], memo[105][55];
int main(){

    scanf("%d", &t);

    while(t--){
        memset(memo, 0, sizeof memo);
        scanf("%d", &n);
        for(int i=1;i<=n;i++)
            scanf("%d %d", &q[i], &p[i]);

        for(int i=1;i<=n;i++){
            for(int j=0;j<=50;j++){
                    if(p[i]>j) memo[i][j] = memo[i-1][j];
                    else
                        memo[i][j] = max(memo[i-1][j], memo[i-1][j-p[i]] + q[i]);
            }
        }

        int peso = 50;
        while(peso>1){
            if(memo[n][peso] != memo[n][peso-1]) break;
            peso--;
        }
        int i=n,j=50, restam = n;

        while(1){
            if(memo[i][j]== 0 || i<=0 || j<=0) break;
            if(memo[i][j] != memo[i-1][j]){
                restam--;
                j-=p[i];
            }
            i--;
        }
        int resp = memo[n][50];
        printf("%d brinquedos\n", resp);
        printf("Peso: %d kg\n", peso);
        printf("sobra(m) %d pacote(s)\n\n", restam);
    }

    return 0;
}
