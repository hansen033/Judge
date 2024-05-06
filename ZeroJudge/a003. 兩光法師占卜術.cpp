#include <iostream>
using namespace std;
int main (){
	int a, b, c;
	while (cin>>a>>b){
		c = (a * 2 + b)%3;
		if ( c == 0 ){
			cout << "普通\n";
		} else if ( c == 1 ){
			cout << "吉\n";
		} else {
			cout << "大吉\n";
		} 
	}
}