#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
int m,s;

int memo[50][1000][1000], coin[100], ecoin[100];

float emod(int x, int y){return sqrt(x * x + y * y);}

int solve(int i, int sumx, int sumy){
	if(emod(sumx, sumy) == s) return 0;
	if(emod(sumx, sumy) > s) return INF;
	if(i == m) return INF;
	if(memo[i][sumx][sumy] != -1) return memo[i][sumx][sumy];
	
	int put = solve(i, sumx+coin[i], sumy+ecoin[i]) + 1;
	int nPut = solve(i+1, sumx, sumy);
	
	return memo[i][sumx][sumy] = min(put, nPut);
}

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	while(n--){
		memset(memo, -1, sizeof memo);
		scanf("%d%d", &m, &s);
		for(int i=0;i<m;i++)
			scanf("%d%d", &coin[i], &ecoin[i]);
		
		int r = solve(0,0,0);
		
		if(r >= INF) printf("not possible\n");
		else printf("%d\n",r);
	}

	return 0;

}
