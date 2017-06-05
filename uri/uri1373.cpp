#include<bits/stdc++.h>
using namespace std;
int n, l1, l2, memo[1005][1005];
string s1,s2;
bool cond = false;

int solve(int i, int j, int cont){
	if(i == l1 || j == l2) return 0;
	if(memo[i][j] != -1) return memo[i][j];

	if(s1[i] == s2[j]){
	    if(cont+1 >= n) cond = true;
		return memo[i][j] = solve(i+1, j+1, cont+1) + 1;
	}else if(cont < n){
		return memo[i][j] = max(solve(i+1, j, 0), solve(i, j+1, 0)) - cont;
	}else{
		cond = true;
		return memo[i][j] = max(solve(i+1, j, 0), solve(i, j+1, 0));
	}
}
int main(){

	while(1){
		scanf("%d", &n);
		if(n==0) return 0;
		memset(memo, -1, sizeof memo);
		cin>>s1>>s2;
		l1 = s1.size();
		l2 = s2.size();
		cond = false;
		int r = solve(0,0,0);
		if(cond) printf("%d\n", r);
		else  printf("0\n");
	}
	return 0;
}
