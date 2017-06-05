#include<bits/stdc++.h>

#define MAX 1e6 + 5

using namespace std;

int main(){

    int t, n, m, k;

    cin >> t;
    int caso = 1;
    while(caso <= t){
        int v[(int)MAX];
        scanf("%d%d%d", &n, &m, &k);
        v[0] = 0; v[1] = 1; v[2] = 2; v[3] = 3;
        for(int i=4; i <= n; i++)
            v[i] = (v[i-1] + v[i-2] + v[i-3]) % m + 1;

        int menor = MAX;
        int esq = 0, dir = 0;

        map<int, int> s; // valor, quantidade de aparições

        while(dir < n){
            if(s.size() == k){
                menor = min(menor, dir - esq);
                if(v[esq + 1] <= k){
                    s[v[esq + 1]] = s[v[esq + 1]] - 1;
                    if(s[v[esq + 1]] == 0) s.erase(s.find(v[esq + 1]));
                }
                esq++;
            }else{
                if(v[dir + 1] <= k){
                    if(s.find(v[dir + 1]) == s.end())
                        s[v[dir + 1]] = 1;
                    else
                        s[v[dir + 1]] = s[v[dir + 1]] + 1;
                }
                dir++;
            }
        }
        printf("Case %d: ", caso++);

        if(menor == MAX) cout<<"sequence nai\n";
        else cout<<menor<<endl;

    }

    return 0;
}
