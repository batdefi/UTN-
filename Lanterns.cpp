#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int n,l;



int main(){
	cin >> n >> l;
	double d=0;
	vector<double> a(n);
	for (int i=0;i<n;i++){
		cin >> a[i];
		}
	sort(a.begin(),a.end());
	for (int i=1;i<n;i++){
		d= max(d,abs(a[i]-a[i-1]));
		}
	d/=2;
	d=max(d,a[0]);
	d=max(d,l-a[n-1]);
	cout.setf(ios::fixed); // Definicion de la cantidad de digitos despues de la coma.	
	cout.precision(10);	
	cout << d << endl;	
}
