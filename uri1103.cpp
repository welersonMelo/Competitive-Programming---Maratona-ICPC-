#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1,h2, m1, m2;
	while(1){
		scanf("%d%d%d%d" , &h1, &m1, &h2, &m2);
		
		if(h1 == 0 && h2 == 0 && m1 ==0 && m2 == 0) return 0;
		
		h1 = h1*60;
		h2 = h2*60;
		int a = h1+m1;
		int b = h2+m2;
		a = b-a;
		if(a<0) cout<<1440+a<<endl;
		else cout<<a<<endl;
	}
	
}
