#include<bits/stdc++.h>
using namespace std;

char mat[101][101];
int n, m, s, dir;

pair<int ,int> posi;

bool ehPermitido(int i, int j){
    if(i < 0 || j < 0 || i >= n || j >= m) return false;
    if(mat[i][j] == '#') return false;
    return true;
}

void andeFrente(int i, int j){
    if(dir == 0){
        if(ehPermitido(i-1, j)) i--;
    }else if(dir == 1){
        if(ehPermitido(i, j+1)) j++;
    }else if(dir == 2){
        if(ehPermitido(i+1, j)) i++;
    }else{
        if(ehPermitido(i, j-1)) j--;
    }
    posi = make_pair(i, j);
}

int main(){

    while(scanf("%d%d%d", &n, &m, &s) && n && m && s){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
                int c = mat[i][j];
                if(c == 'N' || c == 'S' || c == 'L' || c == 'O'){
                    posi = make_pair(i, j);
                    if(c == 'N') dir = 0;
                    else if(c == 'L') dir = 1;
                    else if(c == 'S') dir = 2;
                    else dir = 3;
                }
            }
        }

        string comand;
        cin>>comand;

        int cont = 0;
        int antI = posi.first, antJ = posi.second;
        for(int i = 0; i < s; i++){
            if(comand[i] == 'F'){
                andeFrente(posi.first, posi.second);
            }else if(comand[i] == 'D'){
                dir = (dir + 1) % 4;
            }else{
                dir--;
                if(dir == -1) dir = 3;
            }
            //printf("%d %d %d %d\n", posi.first, posi.second, antI, antJ);
            if(mat[posi.first][posi.second] == '*') {// && (antI != posi.first || antJ != posi.second))
                cont++;
                mat[posi.first][posi.second] = '.';
            }
            antI = posi.first;
            antJ = posi.second;
        }

        cout<<cont<<endl;
    }

    return 0;
}
