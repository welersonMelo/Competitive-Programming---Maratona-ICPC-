#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,t;

    scanf("%d", &t);

    while(t--){
        int vet[1005];
        scanf("%d", &n);
        for(int i=0;i<n;i++)
            scanf("%d", &vet[i]);

        int soma = 0,  c = 0;
        for(int i=0; i<n;i++){
            if(n-1 == i || soma+vet[i] < vet[i+1]){
                soma+=vet[i];
                c++;
            }
        }

        cout<<c<<endl;

    }

    return 0;
}
