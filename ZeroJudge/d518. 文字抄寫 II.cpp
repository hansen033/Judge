#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int total;
	while(cin >> total){
		map<string, int> data;
		int counter = 1;
		string input;
		for(int t=0; t<total; t++){
			cin >> input;
			if(data.find(input) == data.end()){
				data[input] = counter;
				printf("New! %d\n", counter++);
			} else{
				printf("Old! %d\n", data[input]);
			}
		}
	}
}