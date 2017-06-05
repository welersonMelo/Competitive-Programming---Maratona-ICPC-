#include<bits/stdc++.h>
using namespace std;
int main(){
	int caso = 1;
	
	while(1){
		int n,build, val[10000], uniao[1000][100], valUni[1000], sum = 0;
		int resp1 = 1, resp2 = 2, resp3 = 3;
		
		scanf("%d %d", &n, &build);
		if(n ==0 && build == 0) return 0;
		
		for(int i=0;i<n;i++)
			scanf("%d", &val[i]);
		int m;
		scanf("%d", &m);
		int t[m+1];
		for(int i=0;i<m;i++){
			scanf("%d", &t[i]);
			for(int j=0;j<t[i];j++){
				scanf("%d", &uniao[i][j]);
			}
			scanf("%d", &valUni[i]);
		}
		int maior = m==0?val[0]+val[1]+val[2]:0;
		for(int a=0;a<n-2;a++){
			for(int b=a+1;b<n-1;b++){
				for(int c=b+1;c<n;c++){
					sum+=val[a] + val[b] + val[c];
					int inter = 0;
					
					for(int i=0;i<m;i++){
						int cond = 0;
						for(int j=0;j<t[i];j++){
							if(a+1 == uniao[i][j]) cond++;
							else if(b+1 == uniao[i][j]) cond++;
							else if(c+1 == uniao[i][j]) cond++;
						}
						if(cond == t[i]) inter += valUni[i];
					}
					sum -= inter;
					//printf("%d: %d %d %d\n", sum, a+1, b+1, c+1);
					if(sum > maior){
						resp1 = a+1;
						resp2 = b+1;
						resp3 = c+1;
						maior = sum;
					}
					sum = 0;	
				}
			}
		}//fim primeiro for
		
		printf("Case Number %d\n", caso++);
		printf("Number of Customers: %d\n", maior);
		printf("Locations recommended: %d %d %d\n\n", resp1, resp2, resp3);
		

			
	}
	
	return 0;
}
