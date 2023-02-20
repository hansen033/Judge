#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int CaseAmount, HouseAmount;
	int house[500];
	cin >> CaseAmount;
	for(int t0 = 0; t0 < CaseAmount; t0++){
		cin >> HouseAmount;
		for(int t1 = 0; t1 < HouseAmount; t1++){
			cin >> house[t1];
		}
		sort(house, house + HouseAmount);
		int counter = 0, half = HouseAmount / 2;
		for(int t1 = 0; t1 < HouseAmount; t1++){
			counter += abs(house[t1] - house[half]);
		}
		cout << counter << endl;
	}
}