#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	string s;
	scanf("%d", &t);
	while(t--){
		vector<int> f;
		vector<int> v;
		int a,m;
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>a;
			f.push_back(a);
			v.push_back(a);

		}
		int c=0;
		sort(v.begin(), v.end());
		int n = int(v.size());
		for(int i=0;i<n;i++)
			if(v[n-i-1] == f[i]) c++;
		
		cout<<c<<endl;
		
		
	}
	return 0;
	
}

