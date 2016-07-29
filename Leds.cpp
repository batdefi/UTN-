#include <iostream>
#include <string>
using namespace std;

int N,V,R,leds;
string j;
const int arr[] = {6,2,5,5,4,5,6,3,7,6};
int main(){
	cin >> N;
	
	for (int i = 0; i < N; i++){
	cin >> j;
	leds=0;
	int tam = j.length();
	for (int x = 0; x < tam; x++){
	leds += int(arr[j[x] - '0']);
	}
	cout << leds << " leds" << endl;
	}
}
		
		
