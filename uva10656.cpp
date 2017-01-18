#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	
	while(1){
		vector<int> resp;
        scanf("%d", &n);
		if(n==0) return 0;
		
		for(int i=0;i<n;i++){
			int a;
			scanf("%d", &a);
			if(a != 0) resp.push_back(a);
		}
		if(resp.size()==0) printf("0\n");
		else{
			for(int i=0;i<resp.size()-1;i++){
				printf("%d ", resp[i]);
			}
			printf("%d\n", resp[resp.size()-1]);
		}
	}
	
	return 0;
}
