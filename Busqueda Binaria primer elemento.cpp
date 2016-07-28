#include<iostream>
using namespace std;
int arr[1000000];

int Binario(int n,int x){
	int e=-1,d=n-1,m;
	while(d-e>1){
		m=(e+d)/2;
		if(arr[m]<x){
			e=m;
		}else{
			d=m;
		}
	}
	if(arr[d]==x){
		return d;
	}else{
		return -1;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int j;
	cin>>n;
	cin>>j;
	for(int x=0;x<n;x++){
		cin>>arr[x];
	}
	int a=Binario(n,j);
	cout<<a;
	return 0;
}

//std::lower_bound 1ra posicion donde esta el elemento queremos
//std::upper_bound 1ra posicion donde un elemento es mayor al queq queremos
//std::binary_search dice si el elemento esta en el arreglo
