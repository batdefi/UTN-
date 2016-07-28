#include <iostream>
#include <algorithm>

using namespace std;
int n,x,y,f;
pair<int,int> arr[1000001];
bool comp(pair<int,int> a,pair<int,int> b){
	return (a.second < b.second);
	}
int main(){
	while (cin >> n){
	x=0;
	for (int i=0; i<n;i++){
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr,arr+n,comp);
	f=-1;
	for(int i=0; i<n;i++){
		if (f < arr[i].first){
			f=arr[i].second;
			x++;
		}
	}
	cout << x << endl;
	}
}
	
