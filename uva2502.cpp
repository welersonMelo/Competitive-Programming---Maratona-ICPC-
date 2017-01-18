#include<bits/stdc++.h>
using namespace std;
int main(){

    int l;

    while(1){
        scanf("%d", &l);
        if(l==0) return 0;
        string cor;
        int pos = 1;
        for(int i=1;i<l;i++){
            cin>>cor;

            if(pos == 1 && cor == "+z") pos = 5;
            else if(pos == 1 && cor == "-z") pos = 6;
            else if(pos == 2 && cor == "+z") pos = 6;
            else if(pos == 2 && cor == "-z") pos = 5;
            else if(pos == 1 && cor == "+y") pos = 3;
            else if(pos == 1 && cor == "-y") pos = 4;
            else if(pos == 2 && cor == "+y") pos = 4;
            else if(pos == 2 && cor == "-y") pos = 3;
            else if(pos == 3 && (cor == "-z" || cor == "+z")) pos = 3;
            else if(pos == 4 && (cor == "-z" || cor == "+z")) pos = 4;
            else if(pos == 3 && cor == "+y") pos = 2;
            else if(pos == 3 && cor == "-y") pos = 1;
            else if(pos == 4 && cor == "+y") pos = 1;
            else if(pos == 4 && cor == "-y") pos = 2;

            else if(pos == 5 && cor == "+z") pos = 2;
            else if(pos == 5 && cor == "-z") pos = 1;
            else if(pos == 6 && cor == "+z") pos = 1;
            else if(pos == 6 && cor == "-z") pos = 2;

        }
        char *res;
        if(pos==1)res = "+x";
        else if(pos==2) res = "-x";
        else if(pos==3) res = "+y";
        else if(pos==4) res = "-y";
        else if(pos==5) res = "+z";
        else if(pos==6) res = "-z";

        printf("%s\n", res);
    }

    return 0;
}
