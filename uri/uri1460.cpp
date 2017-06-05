#include<bits/stdc++.h>
using namespace std;
int ini, inj;
int n,m;

int bb(int b, int e, int l,int i, int mat[505][505]){
    int mid = (b+e)/2;
    if(mat[i][mid] == l) return mid;
    if(b >= e){
        //printf("meio: %d\n", mid);
        return mid;
    }

    if(l < mat[i][mid]) bb(b, mid-1, l, i, mat);
    else bb(mid+1, e, l, i, mat);
}

int main(){

    int q, l,u;

    while(1){
        int mat[505][505];
        scanf("%d%d", &n, &m);

        if(n==m && n == 0) return 0;

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) scanf("%d", &mat[i][j]);

        scanf("%d", &q);

        for(int k=0;k<q;k++){
            int maior = 0;
            scanf("%d%d", &l,&u);
            ini=n, inj=m;
            for(int i=0;i<n;i++){
                int cont = 0;
                //mat[i][j] >= l && mat[i][j]<=u
                int ind = bb(0,m,l,i,mat);
                printf("%d\n", mat[i][ind]);
                if(mat[i][ind] <= u){
                    ini = i;
                    inj = ind;

                    while(1){
                        if(ini>=n || inj>=m) break;
                        if(!(mat[ini++][inj++] <= u)) break;

                        cont++;
                    }
                    if(cont>maior) maior = cont;
                }
            }

            printf("%d\n", maior);

        }
        printf("-\n");

    }
    return 0;
}
