#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int present[N], bridge[N];
	for(int t = 0; t < N; t++) {
		cin >> bridge[t];
	}
	for(int t = 0; t < N; t++) {
		cin >> present[t];
	}

	sort(bridge, bridge+N, greater<int>());

	long long on_hand = 0, total = 0;
	for(int t = 0; t < N; t++) {
		total += bridge[t] * on_hand;
		on_hand += present[t];
	}

	cout << total;
}