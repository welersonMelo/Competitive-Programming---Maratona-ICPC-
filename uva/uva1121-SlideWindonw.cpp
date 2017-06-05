#include<bits/stdc++.h>

#define MAX 1e8 + 1

using namespace std;

int main(){

    int n, s, aux;

    while(scanf("%d%d", &n, &s) != EOF){
        vector<int> v;
        v.push_back(0);
        for(int i=0; i < n; i++)
            scanf("%d", &aux), v.push_back(aux);

        int menor = MAX;
        int esq = 0, dir = 0, sum = 0;

        while(dir < n){
            if((sum + v[dir + 1]) < s){
                sum += v[dir + 1];
                dir++;
            }else{
                menor = min(menor, dir - esq + 1);
                sum -= v[++esq];
            }
            //if(esq > dir) dir = esq;
        }
        if(menor == MAX) cout<<"0\n";
        else cout<<menor<<endl;
    }


    return 0;
}
