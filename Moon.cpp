#include <iostream>

using namespace std;
int d1,d2;


int main(){
	cin >> d1 >> d2;
	if (d2 <= 2){
		cout << "nova" << endl;
	}else if (d2 >= 97){
		cout << "cheia" << endl;
	}else if (d1 >= 0 && d2 <=96 && d1 < d2){
		cout << "crescente" << endl;
	}else if (d1 >= 0 && d2 <=96 && d2 < d1){
		cout << "minguante" << endl;
	}else if (d1 >= 0 && d2 <=96 && d2 == d1){
		cout << "minguante" << endl;
	}
	return 0;
}
