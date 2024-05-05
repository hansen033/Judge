#include <iostream>
using namespace std;
int main(){
	int a, b;
	while(cin >> a >> b){
		if(b == 0){
			if(a == 0)
				cout << "Ok!\n";
			else
				cout << "Impossib1e!\n";
		}else if(a % b == 0)
			cout << "Ok!\n";
		else
			cout << "Impossib1e!\n";
	}
}