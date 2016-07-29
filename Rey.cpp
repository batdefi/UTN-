#include <iostream>
#include <cmath>

using namespace std;

int absoluto (int x) {
	return (x >= 0) ? x : -x;
}

int main() { 
	int i1, i2, j1, j2;
	while (cin >> i1 >> j1 >> i2 >> j2) {
		cout << max( absoluto(i1-i2), absoluto(j1-j2)) << endl;
	}
}
