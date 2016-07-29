#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int N,X,result,num_calls,tot,a;
int fibonacci(int x){
	tot++;	
	if (x == 1){
	return 1;
	}
	else if (x == 0)
	return 0;
	else 
	return fibonacci (x-1)+fibonacci(x-2);
}
	
int main (){
	
	while (cin >> N){
	a=0;
	for (int i = 0; i < N; i++){
	cin >> X;
	tot=0;
	a = fibonacci(X);
	cout << "fib(" << X << ") = "<< tot-1 <<" calls = " << a << endl;
	}
	
	}
}




