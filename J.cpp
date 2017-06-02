#include<bits/stdc++.h>

#define MAX (int) 1e5 + 5

using namespace std;

int c[MAX], dfsNum[MAX], dfsLow[MAX], dfsParent[MAX];
int contTime = 1, dfsRoot = 0, contRootChild = 0, subTot = 0;

vector<int> adjList[MAX];

bool isAP[MAX];
int ans[MAX], sum[MAX], sumPontes[MAX], total[MAX];

void dfs(int u, int pass){
    dfsLow[u] = dfsNum[u] = contTime++;
    int maior = -MAX;

    if(pass == -1) total[u] = 0;
    else total[u] += total[pass] + c[pass];

    for(int j = 0; j < adjList[u].size(); j++){
        int v = adjList[u][j];

        if(dfsNum[v] == 0){
            dfsParent[v] = u;
            if(u == dfsRoot) contRootChild++;

            dfs(v, u);

            sum[u] += sum[v];
            maior = max(sum[v], maior);

            if(dfsLow[v] >= dfsNum[u]) isAP[u] = true;
            dfsLow[u] = min(dfsLow[v], dfsLow[u]);
        }else if(v != dfsParent[u])
            dfsLow[u] = min(dfsLow[u], dfsNum[v]);
    }
    ans[u] = maior;
}

int main(){
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    for(int i=0; i < n; i++) scanf("%d", &c[i]), subTot += c[i], sum[i] = sumPontes[i] = c[i];
    for(int i=0; i < m; i++){
        scanf("%d%d", &a, &b);
        a--;b--;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    dfs(dfsRoot, -1);

    if(contRootChild > 1) // É ponto de articulacao
        isAP[dfsRoot] = true;
    else isAP[dfsRoot] = false;

    for(int i=1; i < n; i++)
        ans[i] = max(ans[i], total[i]);

    for(int i=0; i < n; i++){
        int resp;
        if(isAP[i]) resp = ans[i];
        else resp = subTot - c[i];

        if(resp < 0) resp = 0;
        printf("%d%s", resp, i == n-1 ? "\n" : " ");
    }

    return 0;
}
