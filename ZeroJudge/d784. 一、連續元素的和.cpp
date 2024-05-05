#include <iostream>
using namespace std;

int main() {
  int times;
  cin >> times;
  for(int t0 = 0; t0 < times; t0++) {
    int length;
    cin >> length;
    int arr[length];
    for(int t1 = 0; t1 < length; t1++) {
      cin >> arr[t1];
    }

    //DP
    int maximum = arr[0];
    int dp[length];
    dp[0] = arr[0];
    for(int t = 1; t < length; t++) {
      dp[t] = max(arr[t], arr[t] + dp[t-1]);
      if(dp[t] > maximum) {
        maximum = dp[t];
      }
    }
    cout << maximum << endl;
  }
}