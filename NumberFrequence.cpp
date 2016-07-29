#include <iostream>
#include <algorithm>

using namespace std;

int n,x,res;
int arr[2001];

int main(){

	cin >> n;
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	res=1;		
	sort(arr,arr+n);
	for (int i=1;i<n;i++){
		if (arr[i] == arr[i-1]){
			res++;
		}else {
			cout << arr[i-1] << " aparece " << res <<" vez(es)" << endl;
			res=1;
		}	
	}
	cout << arr[n-1] << " aparece " << res <<" vez(es)" << endl;
}





	
