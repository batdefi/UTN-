#include <iostream>
#include <string>

using namespace std;

int N,R;
char j;
const char arr[]= {'N','L','S','O'};
int main (){
	while (cin >> N){
		if (N == 0)
		break;
		R=0;
		for (int i = 0; i < N; i++){
		cin >> j;
		if (j == 'E')
		R-= 1;
		else R+= 1;
		}
		 cout << arr[(((R%4)+4)%4)] << endl;
	}
}
