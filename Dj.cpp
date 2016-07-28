#include <iostream>
#include <vector>
using namespace std;

int n,f;

int main (){
	cin >> n;
	vector<int> v(n);
	vector<bool> vb(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	for(int i=n-1;i>=0;i--){
		f= i+v[i]+1;
		if (f==v.size()){
			vb[i]=1;
		}else if(f < v.size()){
				vb[i]=vb[f];
		}else vb[i]=0;    
	}
	for(int i=1; i<n;i++){
		if(vb[i]==1)
		cout << i << endl;
	}
		cout << n << endl;
}
