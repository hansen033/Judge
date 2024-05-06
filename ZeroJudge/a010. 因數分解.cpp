#include <iostream>
using namespace std;

int main(){
	int a, now, counter;
	bool indicater;
// start:
while(cin >> a){
	// cin >> a;
	if(a == -1)
		return 0;
	now = 2, counter = 0, indicater = 0;
	while(a != 1){
		if(a % now == 0){
			if(counter == 0){
				if(indicater == 1)
					cout << " * " << now;
				else{
					cout << now;
					indicater = 1;
				}
			}
			counter ++;
			a /= now;
		}
		else{
			if(counter == 0)
				now ++;
			else{
				if(counter != 1){
					cout << "^" << counter;
				}
				counter = 0;
				now ++;
			}
		}
	}
	if(counter == 0)
		now ++;
	else{
		if(counter != 1){
			cout << "^" << counter;
		}
		counter = 0;
		now ++;
	}
	cout << endl;
	// goto start;
}
}