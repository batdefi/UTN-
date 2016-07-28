#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long arr[1000000];

int main(){
	long long n,d;
	cin>>n>>d;
	for(int x=0;x<n;x++){
		cin>>arr[x];
	}
	vector<int> v(arr,arr+n);
	sort(v.begin(),v.end());
	long long max=0;
	for(int x=0;x<n;x++){
		long s=upper_bound(v.begin(),v.end(),arr[x]+d)-v.begin()-x-1;
		if(s>max){
			max=s;
		}
	}
	cout<<max;
	return 0;
}
