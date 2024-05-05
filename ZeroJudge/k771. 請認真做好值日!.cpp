#include <iostream>
using namespace std;

struct work{
  int point;
  int time;
};

int main() {
  // input
  int n, m, o;
  cin >> n >> m >> o;
  int points[n+1];
  fill(points, points + n + 1, 0);
  work works[o];
  for(int i = 0; i < o; i++) {
    cin >> works[i].time >> works[i].point;
  }
  // DP
  for (int i = 0; i < o; i++) {
    for(int j = n; j >= works[i].time; j--) {
      points[j] = max(points[j], points[j-works[i].time] + works[i].point);
    }
  }
  // judgement
  int ans = n+2;
  for(int t = 0; t <= n; t++) {
    if(points[t] >= m) {
      ans = t;
      break;
    }
  }
  // output
  cout << ans << ' ' << points[ans] << endl;
}