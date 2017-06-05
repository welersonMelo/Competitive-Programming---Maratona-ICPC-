#include<bits/stdc++.h>
using namespace std;
int inf = 10000001;
int main(){
	
	int t,n, vx[100], vy[100], val[100];
	
	cin>>t;
	int resp[5];
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>vx[i]>>vy[i]>>val[i];
		int maior = 0;
		for(int a=0;a<21;a++){
			for(int b=a+1;b<22;b++){
				for(int c=b+1;c<23;c++){
					for(int d=c+1;d<24;d++){
						for(int e=d+1;e<25;e++){
							int distA=inf;
							int distB=inf;
							int distC=inf;
							int distD=inf;
							int distE=inf;
							for(int i=0;i<n;i++){
								int ax = a/5, ay = a%5;
								int bx = b/5, by = b%5;
								int cx = c/5, cy = c%5;
								int dx = d/5, dy = d%5;
								int ex = e/5, ey = e%5;
								
								distA = (abs(ax-vx[i]) + abs(ay-vy[i])) * val[i] < distA ? (abs(ax-vx[i]) + abs(ay-vy[i])) * val[i]:distA;
								distB = (abs(bx-vx[i]) + abs(by-vy[i])) * val[i] < distB ? (abs(bx-vx[i]) + abs(by-vy[i])) * val[i]:distB;
								distC = (abs(cx-vx[i]) + abs(cy-vy[i])) * val[i] < distC ? (abs(cx-vx[i]) + abs(cy-vy[i])) * val[i]:distC;
								distD = (abs(dx-vx[i]) + abs(dy-vy[i])) * val[i] < distD ? (abs(dx-vx[i]) + abs(dy-vy[i])) * val[i]:distD;
								distE = (abs(ex-vx[i]) + abs(ey-vy[i])) * val[i] < distE ? (abs(ex-vx[i]) + abs(ey-vy[i])) * val[i]:distE;
							}
							int soma = distA+distB+distC+distD+distE;
							cout<<soma<<", ";
							if(soma > maior){
								maior = soma;
							}
						}
					}
				}
			}
		}
		
		
	}
	
	
	return 0;
}
