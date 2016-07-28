#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > lista;

vector<int> BFS(int nodoInicial){
	int n=lista.size(),t;
	queue<int> cola;
	vector<int> distancias(n,n);
	cola.push(nodoInicial);
	distancias[nodoInicial]=0;
	while(!cola.empty()){
		t=cola.front();
		cola.pop();
		for(int i=0;i<lista[t].size();i++){
			if(distancias[lista[t][i]]==n){
				distancias[lista[t][i]]=distancias[t]+1;
				cola.push(lista[t][i]);
			}
		}
	}
	return distancias;
}

int main(){
	
}
