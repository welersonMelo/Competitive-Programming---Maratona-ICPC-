#include<bits/stdc++.h>
using namespace std;
int mat[505][505];
int main(){
	
	int n,m,t;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &m );
		
		long long int x = pow(26,n), y = pow(10,m);
		
		if(n==m && n == 0) cout<<"0\n";
		else cout<<x*y<<endl;	
		
	}
	
	return 0;
}

