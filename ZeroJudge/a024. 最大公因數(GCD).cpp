#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	while( cin >> a >> b ){
		c = a > b ? b : a;
		for( int t = c ; t > 0 ; t -- ){
			if( a % t == 0 && b % t == 0 ){
				cout << t << "\n";
				break;
			}
		}
	}
}