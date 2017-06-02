#include<bits/stdc++.h>
using namespace std;
int main(){

    int d, i, x, f;

    cin>>d>>i>>x>>f;

    if(d%2){
        if(f%2) cout<<i+x<<endl;
        else cout<<i<<endl;
    }else{
        if(f%2) cout<<i-x<<endl;
        else cout<<i<<endl;
    }
    return 0;
}
