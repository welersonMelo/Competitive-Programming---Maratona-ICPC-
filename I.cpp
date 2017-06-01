#include<bits/stdc++.h>

#define MAX 500005

using namespace std;

int visit[MAX], dist[MAX], sum1[MAX];

queue<int> q;

vector<pair <int, int> > v[MAX];

void bfs(int a){
    visit[a] = 1; dist[a] = 0; sum1[a] = 0;
    q.push(a);
    while(!q.empty()){
        int s = q.front();q.pop();
        for(int i=0; i < v[s].size(); i++){
            pair<int,int> u;
            u = v[s][i];
            if(!visit[u.first]){
                visit[u.first] = 1;
                dist[u.first] = dist[s] + 1;
                sum1[u.first] = sum1[s] + u.second;
                q.push(u.first);
            }
        }
    }
}

int main(){

    int c,s,a,b;

    cin>>c>>s>>a>>b;

    int x, y;

    for(int i=0;i < s; i++){
        scanf("%d%d", &x, &y);
        v[x].push_back({y, 1});
        v[y].push_back({x, 0});
    }

    bfs(a); // aqui BFS em A

    if(dist[b] == 0){
        cout<<"Bibibibika\n";
        return 0;
    }
    int invertA = dist[b] - sum1[b];

    memset(visit, 0, sizeof(visit));
    memset(dist, 0, sizeof(dist));
    memset(sum1, 0, sizeof(sum1));

    bfs(b);

    if(dist[a] == 0){
        cout<<"Bibibibika\n";
        return 0;
    }
    int invertB = dist[a] - sum1[a];

    if(invertA < invertB) printf("Bibi: %d\n", invertA);
    else if(invertA > invertB) printf("Bibika: %d\n", invertB);
    else cout<<"Bibibibika\n";

    return 0;
}
