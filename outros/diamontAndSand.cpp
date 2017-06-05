#include<bits/stdc++.h>
using namespace std;
int n;
char c[1010];
vector<char> s;

int main(){
    scanf("%d", &n);
    while(n--){
        int cont = 0;
        scanf("%s", &c);
        int l = strlen(c);
        for(int i=0;i<l;i++){
            int len = s.size();
            if(c[i] == '<') s.push_back(c[i]);
            else if(c[i] == '>'){
                if(!s.empty() && s.back()=='<'){
                    s.pop_back();
                    cont++;
                }else s.push_back(c[i]);
            }
        }
        printf("%d\n", cont);
    }

    return 0;
}
