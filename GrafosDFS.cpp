#include <vector>
#include <iostream>

using namespace std;


bool esArbol(vector<vector<int> > &lista, int t, vector<bool> &visitado, int padre){
	visitado[t]=true;
	for(int i =0; i<lista[t].size();i++){
	if (visitado[lista[t][i]] = true && lista[t][i] != padre)
	return false;
	if (visitado[lista[t][i]] = false)
	  if (esArbol(lista,lista[t][i], visitado, t) == false)
	    return false;
	}
	return true;
}

int main(){
}
