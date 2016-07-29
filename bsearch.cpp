#include <iostream>

using namespace std;

int bsearch (int v[], int n, int x){
	int e=0,d=n;
	while (d-e >1){
		int m=(e+d)/2;
		if (v[m] > x){
		d=m;
		}else e=m;
	}
	if (v[e] == x){return e;}
		else { return -1;}
}
