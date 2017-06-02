#include<bits/stdc++.h>
using namespace std;

vector<pair<int, pair<int, int> > > v[1000005];
vector<int> ans;
int visit[1000005];

int tot = 0;

int dfs(int s){
    int sum = 0;
    visit[s] = 1;
    for(int i=0;i < v[s].size(); i++){
        int prox = v[s][i].second.first;
        if(!visit[prox]){
            int aux = dfs(prox);
            if(aux < 0){
                int id = v[s][i].first;
                if(ans.size() > 0 && id < ans[ans.size() - 1]) ans.pop_back();
                ans.push_back(id);
            }
            else sum += aux;
        }
    }
    if(s == 0) return sum;
    else return sum + v[s][0].second.second;

}

int main(){
    int n, d,a,b, w;
    cin>>n;

    for(int i=0; i < n; i++){
        scanf("%d%d%d%d", &d, &a, &b, &w);
        if(a > b) swap(a, b);
        v[b].push_back({d , {a, w}});// identificar, {vertice, valor}
        v[a].push_back({d , {b, w}});// identificar, {vertice, valor}
    }

    for(int i=0;i < n;i++)
        sort(v[i].begin(), v[i].end());

    int sum = dfs(0);
    int siz = ans.size();

    printf("%d %d\n", sum, siz);

    for(int i=0; i < siz; i++)
        printf("%d ", ans[i]);

    cout<<endl;
    return 0;
}
