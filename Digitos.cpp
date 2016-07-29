#include <iostream>
#include <vector>

using namespace std;
int n,k,a;

int main(){

	cin >> n >> k;
	vector<int>v;
	cin >> a;
	v.push_back(a);
	for (int i=1;i<n;i++){
	cin >> a;
	v.push_back(a);
	if (v[i]>v[i-1]){
		cout << v[i-1] << ' ' << v[i] << endl;
		v[i-1]=v[i];
		v.pop_back();
		cout << v[i-1] << ' ' << v[i] << endl;
		}
	}
	for (int i=0;i<n-k;i++){
	cout << v[i];
	}
	cout << endl;
}
