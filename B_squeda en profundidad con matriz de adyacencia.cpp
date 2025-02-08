#include "bits/stdc++.h"
using namespace std;
vector<bool> Visitados;
vector< vector<bool> > Grafo;
void B_squeda_en_profundidad(long long Nodo){
    Visitados[Nodo] = 1;
    cout<<Nodo<<" ";
    for(long long i = 0; i < Grafo[Nodo].size(); i++){
        if(Grafo[Nodo][i] and !Visitados[i]) B_squeda_en_profundidad(i);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, m;
    cin>>n>>m;
    Grafo.assign(n, vector<bool>(n, 0));
    Visitados.assign(n, 0);
    while(m--){
        long long a, b;
        cin>>a>>b;
        Grafo[a][b] = 1;
        Grafo[b][a] = 1;
    }
    B_squeda_en_profundidad(0);
    return 0;
}