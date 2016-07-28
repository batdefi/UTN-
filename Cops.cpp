#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
using namespace std;
#define MAX 5

int ady[MAX][MAX];  
bool visitado[MAX][MAX]; 
int dx[4]={0,0,1,-1};  
int dy[4]={1,-1,0,0};  
int h,w,t;                 

struct Estado{
    int x; 
    int y;  
    int d;  
    Estado(int x1 , int y1 , int d1) : x(x1), y(y1), d(d1){} 
    Estado(){}
};

Estado previo[MAX][MAX];  

int BFS( int x , int y , int h , int w ){   

    Estado inicial( x , y , 0 ) ;
    queue<Estado> Q;   
    Q.push( inicial ); 
    memset( visitado , false , sizeof( visitado ) ); 

    previo[ x ][ y ] = Estado( -1 , -1 , -1 );  

    while( !Q.empty() ){                 
       Estado actual = Q.front();        
       Q.pop();                          
       if(actual.x==4 && actual.y==4){
         return 1;            
       }
       visitado[actual.x][actual.y]=true; 
       for( int i = 0; i < 4; ++i ){      
          int nx = dx[ i ] + actual.x;    
          int ny = dy[ i ] + actual.y;    
          if( nx >= 0 && nx < h && ny >= 0 && ny < w && ady[nx][ny] != 1 && !visitado[nx][ny] ){
             Estado adyacente( nx , ny , actual.d + 1 );  
             Q.push( adyacente );                    
             previo[ nx ][ ny ] = actual;               
          }
       }
    }
    return 0;
}


int main(){
    int x , y;
    cin>>t;
    h=w=MAX;
    for(int zz=0;zz<t;zz++){
    	for( int i = 0 ; i < h ; ++i ){
        	for( int j = 0 ; j < w ; ++j ){
        	    cin>>ady[ i ][ j ];
        	    x=0;y=0;
        	}
    	}	
    	int min = BFS( x , y , h , w );
    	if(min) cout<<"COPS"<<endl;
    	else cout<<"ROBBERS"<<endl;	
	}
    return 0;
}
