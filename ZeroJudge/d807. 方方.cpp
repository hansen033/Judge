#include <iostream>

int main(){
	int a, b;
	while(std::cin >> a >> b){
		while(a != 0){
			if(a < b)
				std::swap(a, b);
			a -= b;
		}
		std::cout << b << std::endl;
	}
}