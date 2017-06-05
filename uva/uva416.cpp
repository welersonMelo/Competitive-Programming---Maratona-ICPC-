#include<bits/stdc++.h>
using namespace std;

string led[] = {"YYYYYYN","YYYNNNN",  "YYNYYNY", "YYYYNNY", "NYYNNYY", "YNYYNYY", "YNYYYYY", "YYYNNNY", "YYYYYYY", "YYYYNYY"};

bool bc(string a, int num, int posi){
    //printf("%c : %c\n", a[posi], led[num][posi]);
    if(posi == 7) return true;
    if(a[posi] != led[num][posi] && a[posi] == 'Y') return false;
    if(a[posi] != led[num][posi] && a[posi] == 'N'){
        a[posi] = 'Y';
        return bc(a, num, posi+1);
    }
    if(a[posi] == led[num][posi]) return true && bc(a, num, posi+1);
}

bool cond = false;
void fun(int i,int n, int ant, vector<string> v){
    if(i == n){
        cond = true;
        return;
    }
    for(int num = ant-1;num>=0;num--){
        string a = v[i];
        if(bc(a,num, 0)){
            if(num != ant-1 && i != 0){
                return;
            }else{
              //printf("%d , ", num);
              ant = num;
              fun(i+1, n, ant, v);
            }
        }
     }
}

int main(){

    int n;

    while(cin>>n && n){
        vector<string> v;
        for(int i=0;i<n;i++){
            string aux;
            cin>>aux;
            v.push_back(aux);
        }
        cond = false;
        fun(0,n,10,v);
        if(cond) printf("MATCH\n");
        else printf("MISMATCH\n");
    }

    return 0;
}
