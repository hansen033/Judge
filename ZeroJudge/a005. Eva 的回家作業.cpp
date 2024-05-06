#include<iostream>
using namespace std;
int main(){
	int a;
	while (cin >> a){
		int x[a][4];
		for ( int t = 0 ; t < a ; t++ ){
			for ( int t2 = 0 ; t2 < 4 ; t2++ ){
				cin >> x[t][t2];
			}
		}
		for ( int t = 0 ; t < a ; t++ ){
			for ( int m = 0 ; m < 4 ; m++ ){
				cout << x[t][m] << " ";
			}
			if (x[t][1]-x[t][0]==x[t][2]-x[t][1]){
				cout << x[t][3]+(x[t][2]-x[t][1])<<"\n";
			}else{
				cout << x[t][3]*(x[t][1]/x[t][0])<<"\n";
			}
		}
		return 0;
	}
}