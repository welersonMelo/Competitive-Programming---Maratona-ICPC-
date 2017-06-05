#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int d,k,n,t;
	long long int resp;
	
	scanf("%d", &t);
	
	while(t--){
		int c[25];
		scanf("%d", &n);
		for(int i=0;i<=n;i++)
			scanf("%d", &c[i]);
		
		scanf("%d%d",&d, &k);
		int cont = 0;
		bool cond = false;
		for(int i=0;i<10000;i++){
			resp = c[0];
				for(int x=1;x<=n;x++) resp +=c[x]*(pow(i,x)); 
			for(int j=0;j<i*d;j++){
				if(cont == k-1){
					printf("%lld\n", resp);
					cond = true;
					break;
				}
				cont++;
			}
			if(cond) break;
		}
		
	}
	
	return 0;
}
