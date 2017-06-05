#include<bits/stdc++.h>
using namespace std;
vector<float> d;
int main(){
	
	int f,r;

 while(1){	
	double vF[101], vR[101];
	
	scanf("%d", &f);
	
	if(f == 0) return 0;
	
	scanf("%d", &r);
	
	for(int i=0;i<f;i++){
		 scanf("%lf", &vF[i]);
	}
	
	for(int i=0;i<r;i++){
		 scanf("%lf", &vR[i]);
		 for(int j=0;j<f;j++){
			double a = vR[i]/vF[j];
			d.push_back(a);
		}
	 }
	 
	 sort(d.begin(), d.end());
	 
	 double maior = -1.00;
	 for(int i=0;i<d.size()-1;i++){
		double spd = d[i+1]/d[i];
		if(spd > maior) maior = spd;
	 }
	 
	 printf("%.2lf\n", maior);
 }
	return 0;
}
