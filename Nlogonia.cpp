#include <iostream>
#include <string>

using namespace std;

long long K,N,M,X,Y;

int main (){
	while (cin >> K){
	cin >> N >> M;
		for (int i = 0; i < K; i++){
		cin >> X >> Y;
		if (X < N && Y < M)
		cout << "SO" << endl;
		if (X > N && Y < M)
		cout << "SE" << endl;
		if (X > N && Y > M)
		cout << "NE" << endl;
		if (X < N && Y > M)
		cout << "NO" << endl;
		if (X == N || Y == M)
		cout << "divisa" << endl;
		}
	}
}
