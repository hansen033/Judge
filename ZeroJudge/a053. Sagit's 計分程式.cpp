#include <iostream>
using namespace std;

int main() {
  int a;
  while( cin >> a ){
    int b = 0;
    if( a > 40 ){
      b = 100;
    }else if( a > 20 ){
      a -= 20;
      b = 80 + a;
    }else if( a > 10 ){
      a -= 10;
      b = 60 + 2 * a;
    }else{
      b = 6 * a;
    }
    cout << b;
  }
}