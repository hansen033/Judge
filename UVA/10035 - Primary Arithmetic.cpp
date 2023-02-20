#include <iostream>
using namespace std;

int main(){
	string a, b;
	while(cin >> a >> b){
		if(a == "0" && b == "0")
			break;
		int ta = a.size() - 1, tb = b.size() - 1;
		int counter = 0, carry = 0;
		while(ta >=0 || tb >=0){
			if(ta >= 0)
				carry += a[ta] - '0';
			if(tb >= 0)
				carry += b[tb] - '0';
			if(carry >= 10)
				counter++;
			ta--, tb--, carry /= 10;
		}
		if(counter == 0)
			cout << "No carry operation.\n";
		else if(counter == 1)
			cout << "1 carry operation.\n";
		else
			cout << counter << " carry operations.\n";
	}
}