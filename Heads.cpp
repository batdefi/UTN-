#include <iostream>

using namespace std;

int n,Ri,X,Y;

int main(){
	while (cin >> n){
		if (n == 0)
		break;
		X=0, Y=0;
		for (int i = 0; i < n; i++){
		cin >> Ri;
		if (Ri == 0){
		X += 1;
		}else 
		Y += 1;
		}
	cout << "Mary won " << X << " times and John won " << Y << " times" << endl;
	}
}
