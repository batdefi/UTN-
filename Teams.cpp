#include <iostream>

using namespace std;
int n,p,v,t;
int r=0,s=0;
int main(){
		cin >> n;
		for (int i=0; i<n ;i++){
		cin >> p >> v >> t;	 
		r= p+v+t;
		if (r >= 2){
		s+=1;
		}
		}
	cout << s << endl;
}
