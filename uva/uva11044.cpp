#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	string s;
	scanf("%d", &t);
	while(t--){
		int x,y;
		scanf("%d%d", &x, &y);
		x--;y--;
		x--;y--;
		
		long long int a = x%3 == 0? (x/3) : (x/3)+1;
		long long int b = y%3 == 0? (y/3) : (y/3)+1; 
		
		cout<<a*b<<endl;
		
	}
	return 0;
	
}


