#include <iostream>

using namespace std;

int N;
int main (){

	while (cin >> N) {
	int arr[N][N];
		for (int i = 0; i < N ; i++) {	
			for (int j = 0; j <N ; j++){
			if (i+j == N-1){
				arr[i][j] = 2;
				cout << arr[i][j];
				}
			else if (i == j){
			arr[i][j] = 1;
			cout << arr[i][j];
			}
				else
				{ 
				arr[i][j] = 3;
				cout << arr[i][j];
				}
			}
			cout << endl;
		} 
	}
}
