#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,c,x,y;

    cin>>l>>c>>x>>y;

    if(c % 2 == 0){
        if(y % 2) cout<<"Esquerda\n";
        else cout<<"Direita\n";
    }else{
        if(y % 2){
            if(x % 2 == 0) cout<<"Esquerda\n";
            else cout<<"Direita\n";
        }else{
            if(x % 2 == 0) cout<<"Direita\n";
            else cout<<"Esquerda\n";
        }
    }
    return 0;
}
