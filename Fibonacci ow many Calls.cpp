#include<iostream>
using namespace std;
int tot;

int fibonacci (int numero){
	tot++;
  	if (numero<2)
    	return numero;
    else
    	return fibonacci (numero - 1) + fibonacci (numero - 2);
}

int main(){
	int n;
	cin>>n;
	while(n){
		n--;
		int k;
		cin>>k;
		tot=0;
		int z=fibonacci(k);
		cout<<"fib("<<k<<") = "<<--tot<<" calls = "<<z<<endl;
	}
}
