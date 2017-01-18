#include<bits/stdc++.h>
using namespace std;
int main(){
	
	while(1){
		int n,r,d, m[10005], a[10005];//morning, afternoon
		scanf("%d%d%d", &n, &d, &r);
		if(n == 0 && d == 0 && r == 0) return 0;
		
		for(int i=0;i<n;i++)
			scanf("%d", &m[i]);
			
		for(int i=0;i<n;i++)
			scanf("%d", &a[i]);
		
		sort(m, m+n);
		sort(a, a+n);
		
		int extra = 0;
		for(int i=0;i<n;i++){
			int aux = m[i]+a[n-1-i];
			if(aux > d) extra += aux-d;
		}
		printf("%d\n", extra*r);
	}	
	return 0;
}
