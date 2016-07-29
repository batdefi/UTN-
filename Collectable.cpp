#include <iostream>
#include <cmath>

using namespace std;

int N,F1,F2;
int Euclides (int x,int y){
	if (x%y == 0)
	return y;
	else Euclides (y, x%y);
}

int main (){
	cin >> N;
		for (int i = 0; i < N; i++){
			cin >> F1 >> F2;
			cout << Euclides(max(F1,F2),min(F1,F2)) << endl;
		}
}	
