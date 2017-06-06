#include<bits/stdc++.h>

#define MAX (int) (2 * 1e5 + 5)
#define MOD (long long) 1e9 + 7

using namespace std;

struct query{
    int l, r, pedaco_l, id;
    long long ans;
    bool operator<(const query& q) const{
        if(pedaco_l != q.pedaco_l) return pedaco_l < q.pedaco_l;
        return (pedaco_l & 1) ? (r > q.r) : (r < q.r);
    }
};

int k;
long long prod = 1;
multiset<int> s;
multiset<int> excluidos;

void addQ(int x, int l, int r){
    if(r - l < k){
        s.insert(x);
        return;
    }else{
        if(!s.empty()){
            if (x > *s.begin()){
                multiset<int>::iterator it = s.begin();
                excluidos.insert(*it);
                s.erase(it);
                s.insert(x);
            }
        }else s.insert(x);
    }
}

void removeQ(int x, int l, int r, int i){
    multiset<int>::iterator it = s.find(x);

    if(i == 0){
        s.erase(it);
        return;
    }

    if(it != s.end()){
        s.erase(it);

        if(s.size() < k && !excluidos.empty()){
            multiset<int>::iterator add = excluidos.end();
            add--;
            s.insert(*add);
            excluidos.erase(add);
        }

        return;
    }
    it = excluidos.find(x);
    if(it != excluidos.end()){
        excluidos.erase(it);
    }
}

int main(){
    int n, q, L, l, r, m[MAX];

    scanf("%d%d%d", &n, &k, &q);

    L = sqrt(n);

    for(int i = 0; i < n; i++) scanf("%d", &m[i]);

    vector<query> v;

    for(int i=0; i < q; i++){
        scanf("%d%d", &l, &r);
        l--;
        v.push_back(query{l, r, l/L, i, 0});
    }

    sort(v.begin(), v.end());

    l = 0; r = 0;

    for(int i=0; i < q; i++){
        //printf("%d, %d\n", v[i].l, v[i].r);
        while(l > v[i].l){ int a = m[l - 1]; addQ(a, l, r); l--;}
        while(r < v[i].r){ int a = m[r]; addQ(a, l ,r); r++;}

        while(l < v[i].l){ int a = m[l]; removeQ(a, l, r, i); l++;}
        while(r > v[i].r){ int a = m[r - 1]; removeQ(a, l, r, i); r--;}

        //processar resposta
        prod = 1;
        for(multiset<int>::iterator it = s.begin(); it != s.end(); it++){
            long long aux = *it;
            prod = prod * aux;
        }

        v[i].ans = prod;
    }

    int ans[MAX];

    for(int i = 0; i < q; i++) ans[v[i].id] = v[i].ans;
    for(int i = 0; i < q; i++) printf("%d\n", ans[i]);

    return 0;
}
