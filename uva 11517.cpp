#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
int valIni, n, coin[105];

pair<int,int> memo[105][10005];

pair<int,int> solve(int i, int val){
	if(val <= 0) return make_pair(-val,0);
	if(i == n) return make_pair(INF, 0);
	if(memo[i][val].first != -1) return memo[i][val];
	
	pair<int, int> put, nPut;
	
	put = {solve(i+1, val-coin[i]).first, solve(i+1, val-coin[i]).second + 1};
	nPut = {solve(i+1, val).first, solve(i+1, val).second};
	
	return memo[i][val] = min(put, nPut); 	
}

int main(){
	
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &valIni, &n);
		memset(memo, -1, sizeof memo);
		
		for(int i=0;i<n;i++)
			scanf("%d", &coin[i]);
		
		pair<int, int> r; 
		
		r = solve(0,valIni);
		cout<<r.first+valIni<<" "<<r.second<<endl;
	}
	
	return 0;
}
