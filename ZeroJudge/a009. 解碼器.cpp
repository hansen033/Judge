#include <iostream>
#include<string>
using namespace std;

int main() {
	char str[10000];
	cin.getline(str, 10000);
	string strstr = str;
	int len = strstr.size();
	for(long long t = 0 ; t < len ; t ++){
		str[t] -= 7;
		cout << str[t];
	}
	cout << endl;
}