#include<bits/stdc++.h>
using namespace std;
int m;

int main(){
	vector<int> v;
	while(1){
		int n;	
		scanf("%d", &n);
		if(n==-999999) break;
		v.push_back(n);
	}
	m = v.size();
	long long int maior = -999999;
	for(int j=0;j<m;j++){
		long long int prod = v[j];
		if(prod>maior) maior = prod;
		for(int k=j+1;k<m;k++){ 
			prod = prod * v[k];
			if(prod > maior) maior = prod;	
		}		
	}
	
	cout<<maior<<endl;
		
	return 0;
}
