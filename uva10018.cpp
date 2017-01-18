#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		string p;
		cin>>p;

		int cont=0;
		while(1){
			cont++;
			string revers(p);

			int n = p.size();
			//invertendo strig
			for(int i=0;i<n;i++)
				revers[i] = p[n-i-1];

			long long int a = stoi(p);
			long long int b = stoi(revers);
			a = a+b;

			p = to_string(a);

			int len = p.size();
			bool isPal = true;
			for(int i=0;i<len;i++)
				if(p[i] != p[len-i-1]) isPal = false;

			if(isPal) break;
		}
		cout<<cont<<" "<<p<<endl;

	}
	return 0;
}
