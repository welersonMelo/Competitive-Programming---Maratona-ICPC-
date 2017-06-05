#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	
	while(cin>>s){
		int soma = 0, cont=1;
		for(int i=0;i<11;i++){
			if(i!=3 && i!=7){
				int a = (((int)s[i])-48)*(cont++);
				soma+=a;
			}
		}
		int d1 = soma%11==10 ? 0:soma%11;
		cont = 9;
		soma = 0;
		for(int i=0;i<11;i++){
			if(i!=3 && i!=7){
				int a = (((int)s[i])-48)*(cont--);
				soma+=a;
			}
		}
		int d2 = soma%11==10 ? 0:soma%11;
		
		
		if( (((int)s[12])-48) == d1 && (((int)s[13])-48) == d2) 
			cout<<"CPF valido\n";
		else cout<<"CPF invalido\n";

	}
	
	return 0;
}

