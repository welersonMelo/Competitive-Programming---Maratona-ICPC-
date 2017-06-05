#include<bits/stdc++.h>
using namespace std;

unsigned long long int solve( unsigned long long int n){
    if(n==1) return 1;
    if(n%2!=0) return 1 + solve(3*n+1);
    else return 1 + solve(int(n/2));
}

int main(){

    int i,j;

    //memset(memo, -1, sizeof memo);

    scanf("%d%d", &i, &j);
    int I = i, J=j;
    if(i>j) swap(i,j);
    int aux = i;

    unsigned long long int maior = 0;
    for(;i<=j;i++){
        unsigned long long int s = solve(i);
        if(s > maior) maior = s;
    }

    printf("%d %d %u\n", I, J, maior);

    return 0;
}
