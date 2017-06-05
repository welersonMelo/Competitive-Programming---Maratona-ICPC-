#include<bits/stdc++.h>
using namespace std;
int n;

int q[1000], ini=1, fim=0;

void push(int x){
    q[++fim] = x;
}
int frontPop(){
    if(fim-ini>=0) return q[ini++];
}

int main(){

    while(scanf("%d", &n) && n!=0){
        ini = 1;
        fim = 0;
        for(int i=1;i<=n;i++) push(i);
        printf("Discarded cards: ");
        while(true){
            if(fim-ini == 1){
                printf("%d\n", frontPop());
                printf("Remaining card: %d\n", frontPop());
                break;
            }else{
                printf("%d, ", frontPop());
                int f = frontPop();
                push(f);
            }
        }
    }
    return 0;
}
