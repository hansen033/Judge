#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, c;
	while(cin >> a >> b >> c){
		int what = b * b - 4 * a * c;
		if(what == 0){
			int num = b * -1 / (2 * a);
			cout << "Two same roots x=" << num;
		}else if(what > 0){
			int num1 = (b * -1 + sqrt(b * b - 4 *a * c)) / 2 * a, 
				num2 = (b * -1 - sqrt(b * b - 4 *a * c)) / 2 * a;
			if(num1 < num2){
				int g = num1;
				num1 = num2;
				num2 = g;
			}
			cout << "Two different roots x1=" << num1 << " , x2=" << num2;
		}else if(what < 0){
			cout << "No real root";
		}
	}
}