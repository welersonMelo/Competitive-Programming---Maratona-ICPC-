#include<bits/stdc++.h>
using namespace std;

string putZero(string s){
    for(int i=0; i < s.size(); i++){
        if(s[i] == '7') s[i] = '0';
    }
    return s;
}

bool justZeros(string s){
    for(int i=0;i < s.size(); i++)
        if(s[i] != '0') return false;

    return true;
}

int main(){

    string op,a,b;

    cin>>a>>op>>b;

    a = putZero(a);
    b = putZero(b);

    int numA, numB, ans;

    if(justZeros(a)) numA = 0;
    else numA = stoi(a, nullptr, 10);

    if(justZeros(b)) numB = 0;
    else numB = stoi(b, nullptr, 10);

    if(op == "+") ans = numA + numB;
    else ans = numA * numB;

    string strAns = to_string(ans);
    strAns = putZero(strAns);

    if(justZeros(strAns)) ans = 0;
    else ans = stoi(strAns, nullptr, 10);

    cout<<ans<<endl;

    return 0;
}
