#include<bits/stdc++.h>
using namespace std;
int vet[15];

int main(){

    while(1){
        int n;
        scanf("%d", &n);
        if(n==0) return 0;

        for(int i=0;i<n;i++) scanf("%d", &vet[n-i-1]);

        int a=n-6-1, b,c,d,e,f;

        for(a=n-6-1;a<n && a>=0;a++){
             b=n-6-2;
             int cont=0;
                for(int i=n-1;i>=0;i--){
                    if(i!=a && i!= b && i!= c){
                        cont++;
                        if(cont==6)
                            printf("%d\n", vet[i]);
                        else printf("%d ", vet[i]);
                    }
                }//For print

             for(b=n+1-6-2;b<a && b>0;b++){
                c=n-6-3;
                int cont=0;
                for(int i=n-1;i>=0;i--){
                    if(i!=a && i!= b && i!= c){
                        cont++;
                        if(cont==6)
                            printf("%d\n", vet[i]);
                        else printf("%d ", vet[i]);
                    }
                }//For print
                for(c=n+1-6-3;c<b && c>0;c++){
                    d = n-6-4;
                    int cont=0;
                    for(int i=n-1;i>=0;i--){
                        if(i!=a && i!= b && i!= c){
                            cont++;
                            if(cont==6)
                                printf("%d\n", vet[i]);
                            else printf("%d ", vet[i]);
                        }
                    }//For print

                    for(d=n+1-6-4;d<c && d>0;d++){
                        e = n-6-5;
                        int cont=0;
                        for(int i=n-1;i>=0;i--){
                            if(i!=a && i!= b && i!= c){
                                cont++;
                                if(cont==6)
                                    printf("%d\n", vet[i]);
                                else printf("%d ", vet[i]);
                            }
                        }//For print

                        for(e=n+1-6-5;e<d && e>0;e++){
                            f = n-6-6;
                            int cont=0;
                           for(int i=n-1;i>=0;i--){
                            if(i!=a && i!= b && i!= c){
                                cont++;
                                if(cont==6)
                                    printf("%d\n", vet[i]);
                                else printf("%d ", vet[i]);
                            }
                        }//For print

                            for(f=n+1-6-6;f<e && f>0;f++){
                                    int cont=0;
                                    for(int i=n-1;i>=0;i--){
                                    if(i!=a && i!= b && i!= c){
                                        cont++;
                                        if(cont==6)
                                            printf("%d\n", vet[i]);
                                        else printf("%d ", vet[i]);
                                    }
                                }//For print
                            }
                        }
                    }
                }
             }
        }
    }




    return 0;
}
