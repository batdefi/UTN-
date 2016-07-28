#include<bits/stdc++.h>
using namespace std;

int distancias[8][8];
bool vec[8][8];
const int f[]={-2, -2, -1,-1, 1, 2, 2, 1};
const int c[]={ 1, -1, -2, 2,-2,-1, 1, 2};
const int INF = 100000;

int BFS(pair<int,int> nodoInicial){
	pair<int,int> t;
	queue<pair<int,int> > cola;
	cola.push(nodoInicial);
	distancias[nodoInicial.first][nodoInicial.second]=0;
	while(!cola.empty()){
		t=cola.front();
		cola.pop();
		for(int i=0;i<8;i++){
			int nextx = t.first + f[i];
			int nexty = t.second + c[i];
			if (nextx>=0 && nextx<8 && nexty>=0 && nexty<8 && distancias[nextx][nexty]==INF){
				distancias[nextx][nexty]=distancias[t.first][t.second] + 1;
				cola.push(make_pair(nextx,nexty));
			}
		}
	}
	return 0;
}

int main(){
	char c;
	while(cin>>c){
		for(int x=0;x<8;x++){
			for(int j=0;j<8;j++){
				distancias[x][j]=INF;
			}
		}
		char z;
		pair<int,int> e,s;
		int n,t;
		cin>>n;
		e.first=c-97;
		e.second=n-1;
		cin>>z>>t;
		s.first=z-97;
		s.second=t-1;
		BFS(e);
		cout<<"To get from "<<c<<n<<" to "<<z<<t<<" takes "<<distancias[s.first][s.second]<<" knight moves.\n";	
	}
	return 0;
}
