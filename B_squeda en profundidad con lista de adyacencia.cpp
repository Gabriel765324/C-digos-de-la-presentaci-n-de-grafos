#include "bits/stdc++.h"
using namespace std;
vector<bool> Visitados;
vector< vector<long long> > Grafo;
void B_squeda_en_profundidad(long long Nodo){
    Visitados[Nodo] = 1;
    cout<<Nodo<<" ";
    for(auto E: Grafo[Nodo]) if(!Visitados[E]) B_squeda_en_profundidad(E);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, m;
    cin>>n>>m;
    Grafo.assign(n, {});
    Visitados.assign(n, 0);
    while(m--){
        long long a, b;
        cin>>a>>b;
        Grafo[a].push_back(b);
        Grafo[b].push_back(a);
    }
    B_squeda_en_profundidad(0);
    return 0;
}