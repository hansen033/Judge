#include <iostream>

int main(){
	std::string n;
	while(std::cin >> n){
		int step = 0;
		for(int t = 0; t < n.size(); t++){
			step *= 10;
			step += (n[t] - '0');
			step = step % 81;
		}
		if(step == 0)
			std::cout << "konopad!\n";
		else
			std::cout << "konosuba!\n";
	}
}