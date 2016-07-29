#include <iostream>
using namespace std;

bool yavix;
int cont;
int N;
string P;
int i;
int main(){
	while (cin >> P) {
		yavix = false;
		N = 0;
		cont = 0;
		for (int i = 0; (i < (int) P.size()); i++)
			if (P[i] == 'o') {
				cont += 1;
			}
			else if (yavix){
				cont /= 2;
				N = max(N,cont);
				cont = 0;
			}
			else {
				N = cont;
				yavix = true;
				cont = 0;
			}
		
		N = max(N,cont);
		cout << N << endl;
	}
}
