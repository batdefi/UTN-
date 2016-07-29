#include <iostream>

using namespace std;

int N,A,B,RA,RB;

int main (){

	while (cin >> N){
		RA=0,RB=0,A=0,B=0;
		if (N == 0)
		break;
		for (int i = 0; i < N; i++){
			cin >> A >> B;
		 
		if (A > B){
		RA += 1;
		}else if (B > A)
		RB += 1;
		}
	cout << RA << ' ' << RB << endl;
	}
}
		
