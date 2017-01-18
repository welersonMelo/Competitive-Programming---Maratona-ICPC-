#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        vector<int> time;
        int a, t=0, menor = 100000000;
        while(1){
            scanf("%d", &a);

            if((t++) >= 2 && a==0){
                if(time[0]==0 && time[1]==0) return 0;
                break;
            }
            if(a <= menor && a!=0) menor = a;
            time.push_back(a);
        }
        int seg5min = 3600*5, resp = 0;
        bool verde = true;

        for(int i=menor*2;i<=seg5min;i++){
            verde = true;
            for(int j=0;j<time.size();j++){
                int k = i%(time[j]*2);
                if(!(k < time[j]-5)) verde = false;

                //Fazer solução 2 aqui
            }
            if(verde){
                resp = i;
                break;
            }
        }

        if(resp!=0){
            int h = resp / 3600;
            int m = (resp - h * 3600) / 60;
            int s = resp - h * 3600 - m * 60;

            if (h < 10) printf("0");
            printf("%d:", h);
            if (m < 10) printf("0");
            printf("%d:", m);
            if (s < 10) printf("0");
            printf("%d\n", s);
        }
        else printf("Signals fail to synchronise in 5 hours\n");
    }

    return 0;
}
