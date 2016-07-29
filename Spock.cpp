#include <iostream>
#include <cmath>

using namespace std;
const string arr[11]={"tesoura","papel","pedra","lagarto","spock","tesoura","lagarto","papel","spock",
"pedra","tesoura"};
int c,r,s;
string rajesh,sheldon;
bool rb,sb;
int main(){
	cin >> 	c;
	for(int i=0;i<c;i++){
		cin >> rajesh >> sheldon;
		rb=false,sb=false;
		for(int j=0;j<11;j++){	
			if (rajesh == arr[j] ){
			r=j;
			rb=true;
			}
			if (sheldon == arr[j]){
			s=j;
			sb=true;
			}
			if (rb && sb){
			int f=abs(r-s);
				if (f==1 || f==0){
					if (r<s){
					cout << "rajesh" << endl;
					break;
					}else if (s<r){
						cout << "sheldon" << endl;
						break;
						}
						else { cout << "empate" << endl;
							break;
						}				
				}
			}
		}
	}
}
	
