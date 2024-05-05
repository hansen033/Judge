#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	cin.sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b;
	while(cin >> a >> b){
		cout << fixed << setprecision(0) << pow(a, b);
	}
}