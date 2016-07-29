#include <iostream>

using namespace std;
/* c++ funciones = lower_bound / upper_bound
lower_bound #primer numero que buscas
upper_bound #primer numero mayor al que buscas
*/
int v[10000];

int bsearch (int v[], int n, int x){
	int e=-1,d=n-1; // [e,d)
	while (d-e >1){
		int m=(e+d)/2;
		if (v[m] > x){
		d=m;
		}else if (v[m]<m)
					e=m;
		else 
		d=m+1;
	}
	if (v[e] == x){return e;}
		else { return -1;}
}

int bsearchtc (int v[], int n, int x){
	int e=-1,d=n-1; // (e,d]
	while (d-e >1){
		int m=(e+d)/2;
		if (v[m] < x){
		e=m;
		}else 
		d=m;
	}
	if (v[d] == x){return d;}
		else { return -1;}
}

int main(){
	//Entrada salida rapida 
	ios::sync_with_stdio(false);
	cin.tie(0);
	//
	int n,q;
	cin >> n >> q;

	for (int i = 0; i<n;i++){
	cin >> v[i]; 
	}
	
	for (int i = 0; i < q; i++){
	int x;
	cin >> x;
	cout << bsearchtc (v,n,x) << endl;
	}
}
