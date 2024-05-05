#include <iostream>
#include <vector>
using namespace std;

struct city {
  vector<int> next;
  bool reached = false;
};

bool i_can_get_there(city cities[], int nodeAmount, int a, int b) {
  if (a == b)
    return true;
  if (cities[a].reached)
    return false;
  cities[a].reached = true;
  for (int t = 0; t < cities[a].next.size(); t++) {
    if (i_can_get_there(cities, nodeAmount, cities[a].next[t], b))
      return true;
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int NodeAmount, LinkAmount;
  while (cin >> NodeAmount) {
    NodeAmount += 1;
    cin >> LinkAmount;
    int a, b;
    city cities[NodeAmount];
    for (int t = 0; t < LinkAmount; t++) {
      cin >> a >> b;
      cities[a].next.push_back(b);
    }
    cin >> a >> b;
    if (i_can_get_there(cities, NodeAmount, a, b))
      cout << "Yes!!!\n";
    else
      cout << "No!!!\n";
  }
}