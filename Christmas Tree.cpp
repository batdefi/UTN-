#include<bits/stdc++.h>
using namespace std;

const int MAXN=400;
int dp[MAXN][MAXN];

int main(){
	int k;
	cin>>k;
	for(int z=1;z<=k;z++){
		int s,n;
		cin>>n>>s;
		vector<pair<int,int> > objetos(n);
		for(int i=0;i<n;i++){
			cin>>objetos[i].second>>objetos[i].first;
		}
		for(int o=0;o<=n;o++){
			for(int capacidad=0;capacidad<=s;capacidad++){
				if(o==0){
					dp[capacidad][o]=0;
				}else if(objetos[o-1].first<=capacidad){
					dp[capacidad][o]=max(objetos[o-1].second+dp[capacidad-objetos[o-1].first][o-1],dp[capacidad][o-1]);
				}else{
						dp[capacidad][o]=dp[capacidad][o-1];
					}
				}
		}
		cout<<"Galho "<<z<<":\nNumero total de enfeites: "<<dp[s][n]<<endl<<endl;
	}
	return 0;
}
