#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;

int main(){
	int n,k;
	cin>>n>>k;
	for(int x=0;x<n;x++){
		int j;
		cin>>j;
		vec.push_back(j);
	}
	int tam=vec.size();
	while(vec.size()>tam-k){
		vector<int>::iterator it=vec.begin();
		it++;
		if(vec.begin()<it){
			bool cond=true;
			for(vector<int>::iterator itt=vec.begin()++;itt!=vec.end() && k>0 && cond;it++){
				if(vec.begin()<itt){
					vec.erase(vec.begin());
					k--;
				}else{
					cond=false;
				}
			}
		}
	}
	while(vec.size()){
		cout<<vec.front();
		vec.erase(vec.begin());
	}
	return 0;
}
