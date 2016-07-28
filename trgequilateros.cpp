#include <iostream>

using namespace std;

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

	
