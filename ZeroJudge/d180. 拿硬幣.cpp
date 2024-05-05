#include <iostream>
using namespace std;
int main(){
	int a, A = 0, B = 0;
	cin >> a;
	int x[a];
	for(int t = 0 ; t < a ; t ++)
		cin >> x[t];
	for(int t = 0 ; t < a / 2 ; t ++){
		if(t % 2 == 0)
			A += x[t];
		else if(t % 2 == 1)
			B += x[t];
	}
	if(A > B){
		cout << "left\n";
	}else if(A < B){
		cout << "right\n";
	}else{
		cout << "error\n";
	}
}