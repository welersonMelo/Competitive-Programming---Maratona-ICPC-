#include<bits/stdc++.h>
using namespace std;
int b[10005], s[10005];
int n,m;

int main(){
	
	int t=0;
	while(1){
		t++;
		scanf("%d %d", &n, &m);
		
		if(n==0 && m==0) return 0;
		
		for(int i=0;i<n;i++) scanf("%d", &b[i]);
		for(int i=0;i<m;i++) scanf("%d", &s[i]);
		
		sort(b, b+n);
		//sort(s, s+m);
		
		int idm = b[0];
		
		if(n-m <= 0) printf("Case %d: 0\n", t);
		else printf("Case %d: %d %d\n", t,n-m, idm);
	}	
	return 0;
}
