#include <iostream>
using namespace std;

// [全域變數]
int dataAmount;
//1 ≤ p ≤ 20
int data[25];
//bool型別使用1bit表示0(false)或1(true)，但(通常)會占用1byte
bool possible;

// [遞迴]
//使用參數還是全域變數都是可以的
void CombinationFinder(int depth, int sumA, int sumB) {
  //cout << depth << " : " << sum << endl;
  // [結束條件]
  // if(sum > target || possible)
  //   return;
  if(depth == dataAmount) {
    if(sumA == sumB) {
      //cout << "P: " << depth << " : " << sum << endl;
      possible = true;
    }
    return;
  }

  // [繼續]
  CombinationFinder(depth + 1, (sumA + data[depth] - 1) % 10007 + 1, sumB);
  CombinationFinder(depth + 1, sumA, (sumB + data[depth] - 1) % 10007 + 1);
}

int main() {
  //int runTimes;
  //cin >> runTimes;

  //for(int runtime = 0; runtime < runTimes; runtime++) {
    cin /*>> target*/ >> dataAmount;
    for(int t = 0; t < dataAmount; t++) {
      cin >> data[t];
      //data[t] %= 10007;
    }

    // [開始遞迴]
    possible = false;
    CombinationFinder(0, 0, 0);

    // [判斷]
    if(possible)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  //}

  return 0;
}