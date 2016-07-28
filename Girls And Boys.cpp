#include<iostream>
using namespace std;

int main(){
    int g, b;
    cin>>g>>b;
    while(g!=-1 && b!=-1) {
        int G, B;
        G=max(g,b);
        B=min(g,b);
        int sal=G/(B+1)+(G%(B+1)>0);
        cout<<sal<<endl;
        cin>>g>>b;
    }
    return 0;
}
