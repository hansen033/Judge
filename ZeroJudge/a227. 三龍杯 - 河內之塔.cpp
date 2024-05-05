#include <iostream>
using namespace std;

void HonaiTower(int N, char from, char to, char spare);

int main() {
  int N;
  while(cin >> N) {
    HonaiTower(N, 'A', 'C', 'B');
  }
}

void HonaiTower(int N, char from, char to, char spare) {
  //printf("Current N:%d\n", N);
  // 終止條件
  if(N == 1) {
    printf("Move ring 1 from %c to %c\n", from, to);
    return;
  }
  // 自我複製
  HonaiTower(N-1, from, spare, to);
  //printf(" >Current N:%d\n", N);
  printf("Move ring %d from %c to %c\n", N, from, to);
  HonaiTower(N-1, spare, to, from);
  //printf(" >Current N:%d\n", N);
}