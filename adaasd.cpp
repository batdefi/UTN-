#include <iostream>

using namespace std;

int main(void){
   int n, v[100];
   unsigned long long int aux;

   cin >> n;

   for(int i = 0; i < n; i++)
      cin >> v[i];

   for(int i = 0; i < n; i++){
      aux = 1;
      cout << ((aux << v[i]) - 1) / 12000 << " kg" << endl;
   }

   return 0;
}
