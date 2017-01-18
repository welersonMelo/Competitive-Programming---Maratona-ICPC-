#include<bits/stdc++.h>
using namespace std;
int s[1009], cur = 0;

void pop(){
    if(cur > 0) cur--;
}
void push(int x){
    s[++cur] = x;
}
int top(){
    return s[cur];
}
void clearP(){
    cur = 0;
}

int vet[1009];
bool cond;
int main(){
    int n;
    while(scanf("%d", &n) && n!=0){
        while(scanf("%d", &vet[1]) && vet[1]!=0){
            for(int i=2;i<=n;i++) scanf("%d", &vet[i]);
            int j=0;
            clearP();
            cond = false;
            push(++j);
            for(int i=1;i<=n;i++){
                while(top() != vet[i] && j<=n) push(++j);
                if(top() == vet[i]) pop();
                else{
                    printf("No\n");
                    cond = true;
                    break;
                }
            }
            if(!cond) printf("Yes\n");
        }
        cout<<endl;
    }
    return 0;
}
