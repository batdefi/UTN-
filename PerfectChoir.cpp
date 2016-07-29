#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	int n,x,r;
	while (cin >> n){
	vector<int> v(n);
	r=0;
	for (int i=0; i < n;i++){
	cin >> v[i];
	r+=v[i];
		}
	if (r%n != 0){
	cout << "-1" << endl;
	}
	else{
	int k = r/n;
	r =0;
	for (int h=0;h<n;h++){
		r+=abs(v[h]-k);
	}
	cout << 1+r/2 << endl;
	}
	}
	return 0;

}
