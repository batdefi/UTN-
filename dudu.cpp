#include <bits/stdc++.h>
using namespace std;

bool esArbol(vector<vector<int> > &lista, int t, vector<int> &visitado, int padre,int j,vector<bool> &sal){
	sal[t]=true;
	visitado[t]=j;
	for(int i =0; i<lista[t].size();i++){
		if (visitado[lista[t][i]] == j && sal[lista[t][i]])
			return false;
		if (visitado[lista[t][i]] == 0)
	  	if (esArbol(lista,lista[t][i], visitado, padre, j, sal) == false)
	  	  return false;
	}
	sal[t]=false;
	return true;
}


int main(){
	int k;
	cin>>k;
	while(k){
		int n,m;
		cin>>n>>m;
		vector<vector<int> > lista(n+1,vector<int>());
		vector<int> visitado(n+1,0);
		vector<bool> sal(n+1);
		for(int j=0;j<m;j++){
			int x,y;
			cin>>x>>y;
			lista[x].push_back(y);
		}
		
	/*for(int i=1; i<m;i++){
			if(lista[i].size()){
					cout<<i<<": ";
				for(int x=0;x<lista[i].size();x++){
				cout<<lista[i][x]<<" ";			
				}
				cout<<endl;		
			}
		}*/
	
		int j=0;
		bool cond=true;
		for(int x=1;x<n+1;x++){
			j++;
			if(visitado[x]==0){
				cond=esArbol(lista,x,visitado,x,j,sal);
			}
			if(!cond) break;
		}			
		if(cond) cout<<"NAO"<<endl;
		else cout<<"SIM"<<endl;
		k--;
	}
	return 0;
}
