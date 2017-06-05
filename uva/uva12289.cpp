#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	string s;
	scanf("%d", &t);
	while(t--){
		cin>>s;
		int erro = 0, resp;
		string a = "one", b = "two", c = "three";
		
		for(int i=0;i<3;i++)
			if(a[i] != s[i]) erro++;
		
		if(erro == 0 || erro == 1) resp = 1;
		
		erro = 0;
		
		for(int i=0;i<3;i++)
			if(b[i] != s[i]) erro++;
		if(erro == 0 || erro == 1) resp = 2;
		
		erro = 0;

		for(int i=0;i<5;i++)
			if(c[i] != s[i]) erro++;
		if(erro == 0 || erro == 1) resp = 3;
		
		cout<<resp<<endl;
	
	}
	return 0;
	
}

