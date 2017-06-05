#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, s = 42, t, aux;
    cin >> t;
    while(t--){
        scanf("%d", &n);
        vector<int> v;
        v.push_back(0);
        for(int i=0; i < n; i++)
            scanf("%d", &aux), v.push_back(aux);

        int ans = 0;
        int esq = 0, dir = 0, sum = 0;

        while(dir < n){
            if((sum + v[dir + 1]) < s){
                sum += v[dir + 1];
                dir++;
            }else if(sum + v[dir + 1] > s){
                sum -= v[++esq];
            }else{// se são iguais
                esq = ++dir;
                sum = 0;
                ans ++;
            }
        }
        //0 20 20 2 20 20
        cout<<ans<<endl;
    }


    return 0;
}

