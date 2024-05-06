#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int input, current;
	bool result[100];
	while(cin >> input){
		if(input == EOF) break;
		current = 0;
		memset(result, 0, 100);
		while(input!=0){
			if(input%2 == 1)
				result[current] = 1;
			else
				result[current] = 0;
			input/=2;
			current++;
		}
		for(int t = current-1; t >=0; t-- ){
			cout << result[t];
		}
		cout << endl;
	}
	return 0;
}