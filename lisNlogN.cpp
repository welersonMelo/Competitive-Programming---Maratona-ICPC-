#include<bits/stdc++.h>
using namespace std;
int s[100000], n=0, resp[100000];

int bb(vector<int> &indice,int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (s[indice[m]] >= key)
        r = m;
    else
        l = m;
    }
 
    return r;
}

int main(){
	
	while(scanf("%d", &s[n])!= EOF){
		n++;
	}
	
	vector<int> ind(n, 0);
	vector<int> prev(n, -1);
	
	int len = 1;
	for(int i=1;i<n;i++){
		if(s[i] < s[ind[0]]) ind[0] = i;
		else if(s[i] > s[ind[len-1]]){
			prev[i] = ind[len-1];
			ind[len++] = i;
		}
		else{
			int pos = bb(ind, -1, len-1, s[i]);
			prev[i] = ind[pos-1];
			ind[pos] = i;
		}
	}
	int cont = 0;
	for(int i = ind[len-1];i >=0; i = prev[i])
		resp[cont++] = s[i];
	
	printf("%d\n-\n", len);
	
	for(int i=len-1; i >=0; i--)
		printf("%d\n", resp[i]);
		
	
}
