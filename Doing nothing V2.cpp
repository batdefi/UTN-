#include <iostream>

using namespace std;

int N;
int M;
int Ci;
int j;
long long R;
long long arr[100001];

int main() {
	cin >> N;
	cin >> M;

	while ((N != -1) && (M != -1)) {
		R = 0;
		j = 0;
		
		for (int i=0; i < N; i++){
			cin >> arr[i];
		}

		for (int i=0; i < N; i++){
		R += (arr[i] * (N-i) * M);
			
		}
		cout << R << endl;
		cin >> N;
		cin >> M;
	}
}
