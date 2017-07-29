#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, m ,k, val;

    cin>>n>>m>>k;

    vector<pair<int, int> > row(500001, make_pair(0,0)), col(500001, make_pair(0,0));

    string op;

    for(int i=0;i<k;i++){
        cin>>op>>val;

        int atual = (i%4) + 1;

        if(op == "L") row[val - 1] = make_pair(atual, i+1);
        else col[val - 1] = make_pair(atual, i+1);
    }

    int mat[n+1][m+1];

    for(int i=0;i < n; i++)
        for(int j=0;j < m; j++)
            if(row[i].second > col[j].second) mat[i][j] = row[i].first;
            else mat[i][j] = col[j].first;

    int r = 0, h = 0, c = 0, p = 0;
    for(int i=0;i < n; i++){
        for(int j=0;j < m; j++){
            if(mat[i][j] == 1) r++;
            if(mat[i][j] == 2) h++;
            if(mat[i][j] == 3) c++;
            if(mat[i][j] == 4) p++;
        }
    }

    printf("R%d H%d C%d P%d\n", r, h, c, p);

    return 0;
}
