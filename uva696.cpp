#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    int cont = 0;
    while(1){
        scanf("%d%d", &n, &m);
        if(n==m && n == 0) return 0;
        int respR = n, respC=m;

        if(n>m) swap(n,m);

        if(n==1) cont = m;
        else if(m==1) cont = n;
        else if(n==2){
            if(m%4==0) cont = (m/4)*4;
            else if(m%4==1) cont = (m/4)*4 + 2;
            else if(m%4>=2) cont = (m/4)*4 + 4;
        }
        else
            cont = (m*n+1)/2;


        printf("%d knights may be placed on a %d row %d column board.\n", cont, respR, respC);
    }

    return 0;
}
