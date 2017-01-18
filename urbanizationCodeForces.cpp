#include<bits/stdc++.h>
using namespace std;
int main(){
	int	n,n1,n2, a[100005];
	
	scanf("%d%d%d", &n, &n1, &n2);
	if(n1>n2) swap(n1,n2);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	sort(a, a+n);
	n--;
	
	double soma1=0, soma2 = 0;
	for(int i=0;i<n1;i++){
		soma1+= a[n--];
	}
	for(int i=0;i<n2;i++){
		soma2+= a[n--];
	}
	
	double r1 = soma1/n1, r2 = soma2/n2;

	printf("%.8lf", r1+r2);
	
	return 0;
}
