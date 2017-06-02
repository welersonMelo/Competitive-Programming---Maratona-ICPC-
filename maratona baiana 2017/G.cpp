#include<bits/stdc++.h>
using namespace std;

int n, g;

int m[2050][2050];

bool checkCond(int mSiz){
    for(int i = mSiz; i < n;i+=mSiz){
        for(int j = mSiz; j < n; j+=mSiz){
            int sum = 0 ;
            for(int x = i - mSiz; x < i; x++){
                for(int y = j - mSiz; y < j; y++){
                    sum += m[x][y];
                }
            }// Fim convolution
            if(sum < g) return false;
        }
    }
    return true;
}

int main(){

    int pot2[15] = {1,2,4,8,16, 32, 64, 128, 256, 512, 1024, 2048};

    scanf("%d%d", &n, &g);

    for(int i=0; i < n;i++)
        for(int j=0; j < n;j++)
            scanf("%d", &m[i][j]);

    int exp = 0;
    while(pot2[exp] <= n){
        if(checkCond(pot2[exp])){
            cout<<((n*n)/(pot2[exp] * pot2[exp]))<<endl;
            return 0;
        }
        exp++;
    }

    cout<<"0\n";
    return 0;
}
