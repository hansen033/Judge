#include <iostream>
using namespace std;
int main() {
	int a, b;
	while(cin >> a >> b){
		int d[a][b];
		for(int t = 0 ; t < a ; t ++)
			for(int t2 = 0 ; t2 < b ; t2 ++)
				cin >> d[t][t2];
		for(int t = 0 ; t < b ; t ++){
			for(int t2 = 0 ; t2 < a ; t2 ++)
				cout << d[t2][t] << " ";
			cout << "\n";
		}
	}
}