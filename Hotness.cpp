#include <bits/stdc++.h>

using namespace std;

int n,sum,t;
bool myfunction (int i,int j) { 
return (i<j); 
}

int main (){
	cin >> t;
	for(int h=0;h<t;h++){
		cin >> n;
		vector<int> m(n);
		vector<int> w(n);
		sum=0;
		for(int i=0; i<n;i++){
			cin >> m[i];
		}
		for(int i=0; i<n;i++){
			cin >> w[i];
		}
		sort(m.begin(),m.end(),myfunction);
		sort(w.begin(),w.end(),myfunction);
		for(int i=0; i<n;i++){
			sum+=m[i]*w[i];
		}
		cout << sum << endl;
		}
}
