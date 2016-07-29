#include <iostream>
#include <string>

using namespace std;
int o,w,t,n;
int main(){
	char one[3]={'o','n','e'};
	char two[3]={'t','w','o'};
	char three[5]={'t','h','r','e','e'};	
	string j;
	while (cin >> n){
			
	for (int g=0; g<n ; g++){
		o=0,w=0,t=0;
		cin >> j;
		for (int i=0; i < (int)j.size(); i++){
			if (j[i] == one[i]){
				o++;
				if (o == 2 ){
				cout << 1 << endl;
				}				
			}
			if (j[i] == two[i]){
			w++;
				
				if (w == 2){
				cout << 2 << endl;
				}
			}
			if (j[i] == three[i]){
				t++;
				
				if (t == 4){
				cout << 3 << endl;
				}
				}
			}
		}
	}
}



