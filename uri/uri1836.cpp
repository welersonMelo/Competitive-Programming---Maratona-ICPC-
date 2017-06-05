#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        int l;
        char nome[255];
        scanf("%s %d", nome, &l);
        int hp, ata, df, sp, b, iv, ev;

        scanf("%d%d%d", &b,&iv,&ev);
        hp = (((iv+b+50+sqrt(ev)/8)*l)/50)+10;

        scanf("%d%d%d", &b,&iv,&ev);
        ata = (((iv+b+sqrt(ev)/8)*l)/50)+5;

        scanf("%d%d%d", &b,&iv,&ev);
        df = (((iv+b+sqrt(ev)/8)*l)/50)+5;

        scanf("%d%d%d", &b,&iv,&ev);
        sp = (((iv+b+sqrt(ev)/8)*l)/50)+5;

        printf("Caso #%d: %s nivel %d\n", i, nome, l);
        printf("HP: %d\n", hp);
        printf("AT: %d\n", ata);
        printf("DF: %d\n", df);
        printf("SP: %d\n", sp);
    }

    return 0;
}
