    #include<bits/stdc++.h>
    using namespace std;
    #define MAX int(205)
    vector<int>vi[MAX];

    int memo[MAX][25];

    int n,m,c, k;

    int solve(int i, int mon){
        if(mon < 0) return 0;
        if(i==c) return m-mon;

        if(memo[i][mon] != -1) return memo[mon][i];
        int ans = -1;

        for(int j=0; j<vi[i].size();j++)
            ans = max(solve(i+1, mon-vi[i][j]),ans);

        return memo[mon][i] = ans;
    }
    int main(){
        scanf("%d", &n);
        while(n--){
            scanf("%d %d", &m, &c);
            for(int i=0;i<c;i++){
                vi[i].erase(vi[i].begin(), vi[i].end());
                for(int ii=0;ii<204;ii++)
                    for(int jj=0;jj<25;jj++) memo[ii][jj] = -1;

                scanf("%d", &k);
                for(int j=0;j<k;j++){
                    int a;
                    scanf("%d", &a);
                    vi[i].push_back(a);
                }
                sort(vi[i].begin(), vi[i].end());
            }// fim leitura e ordenação dos array
            int sum = 0;
            for(int i=0;i<c;i++) sum+=vi[i][0];

            if(sum > m) printf("no solution\n");
            else printf("%d\n", solve(0,m));
        }

        return 0;
    }
