#include<bits/stdc++.h>
using namespace std;
int main(){


    int t, n, d, m[105], passou[105];
    char a[105];
    vector<int> maxi;
    string str;

    scanf("%d", &t);
    int tt = t;
    while(t--){
        scanf("%d%d", &n, &d);
        for(int i=1;i<=n;i++){
            cin>>str;
            char *aux = &str[2];
            stringstream(aux) >> m[i];
            a[i] = str[0];
        }
        m[0]=0;
        a[0]= 'B';
        m[n+1] = d;
        a[n+1] = 'B';

        int prev = 0, maior = 0, c = 1;

        for(int i=1;i<=n+1;i++){
            if(a[i] == 'S'){
                if(c%2 == 0){
                    if(m[i]-prev > maior && c%2 == 0) maior = m[i]-prev;
                    prev = m[i];
                }
                c++;
            }else{
                if(m[i]-prev > maior) maior = m[i]-prev;
                prev = m[i];
            }
        }
        c=1;
        for(int i=n;i>=0;i--){
            if(a[i] == 'S'){
                if(c%2 != 0){
                    if(prev - m[i] > maior) maior = prev-m[i];
                    prev = m[i];
                }
                c++;
            }else{
                if(prev - m[i] > maior) maior = prev - m[i];
                prev = m[i];
            }
        }

        printf("Case %d: %d\n", tt-t, maior);

    }

    return 0;
}
