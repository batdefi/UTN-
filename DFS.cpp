#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > lista;
vector<bool> visitado;

bool esArbol(int t,int padre){
	visitado[t]=true;
	for(int i=0;i<lista[t].size();i++){
		if(visitado[lista[t][i]]==true && lista[t][i]!=padre){
			return false;
		}
		if(visitado[lista[t][i]]==false){
			if (esArbol(lista[t][i],t)){
				return false;
			}
		}
	}
	return true;
}

int main(){
	
}
