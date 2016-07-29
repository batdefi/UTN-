#include <iostream>

using namespace std;

int N,M;
bool grid[50][50];

for (int i1=0; i1<N;i1++({
	for (int j1= 0; j1 < M;j1++){
		for (int i2=0;i2<N;i2++){
			for (int j2=0;j2<M;j2++){
			bool llego = false, todas = true;
				for(int c = min(j1,j2); c <= max(j1,j2);c++){
					if (!grid[i1][c]){
						todas=false;
					}
				}
				for (int i = i1; i <= i2; i++){
				if (!grid[i][j2]){
				todas=false;
				}
				if (todas){
				llego=true;
				}
				todas=false;
				// falta analizar el otro camino




