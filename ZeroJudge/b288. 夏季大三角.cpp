#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int amount;
	cin >> amount;
	double data[amount][2], max = 0, temp;
	for(int t = 0 ; t < amount ; t ++)
		cin >> data[t][0] >> data[t][1];
	for(int t1 = 0 ; t1 < amount - 2 ; t1 ++){
		for(int t2 = t1 + 1 ; t2 < amount - 1 ; t2 ++){
			for(int t3 = t2 + 1 ; t3 < amount ; t3 ++){
				temp = 0.5 * abs(data[t1][0] * data[t2][1] + data[t2][0] * data[t3][1] + data[t3][0] * data[t1][1] - data[t1][1] * data[t2][0] - data[t2][1] * data[t3][0] - data[t3][1] * data[t1][0]);
				if(temp > max)
					max = temp;
			}
		}
	}
	cout << fixed << setprecision(6) << max;
	return 0;
}