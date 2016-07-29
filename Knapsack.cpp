#include <bits/stdc++.h>

using namespace std;
const int MAXN=2001;
int dp[MAXN][MAXN];
int main (){
	int s,n;
	cin >> s >> n;
	
	vector <pair<int, int> > objetos(n);
	
	for (int i=0; i<n;i++){
	cin >> objetos[i].first >> objetos[i].second;
	}
	for (int o=0;o<=n;o++){
		for (int capacidad=0;capacidad <=s;capacidad++){
		if (o==0){
			dp[capacidad][o]=0;
		}else if (objetos[o-1].first <= capacidad) {
			dp[capacidad][o]=max(objetos[o-1].second + dp[capacidad - objetos[o-1].first][o-1],
				dp[capacidad][o-1]);
		}else {
			dp[capacidad][o] = dp[capacidad][o-1];
		}
	}
	}
	cout << dp[s][n] << endl;

	return 0;
}
