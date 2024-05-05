#include <iostream>
#include <queue>
using namespace std;

int find_starting_x(int width, int grid[100][100]) {
  for (int t = 0; t < width; t++) {
    if (grid[t][0] == 1)
      return t;
  }
  cout << "Didnt found\n";
  return -1;
}

int main() {
  int tik = 0, width, height, flowupward;
  //當輸入結束時系統會傳入EOF導致輸入失敗，迴圈便會中止
  while (cin >> flowupward) {
    queue<pair<int, int>> stepstone;
    cin >> height >> width;
    tik++;
    //題目有給，又不會太大，那就直接開
    int grid[100][100] = {0};
    //輸入，要先思考好自己要如何儲存
    //這裡x的正向向右，y的正向向下
    for (int t1 = 0; t1 < height; t1++) {
      for (int t2 = 0; t2 < width; t2++) {
        cin >> grid[t2][t1];
      }
    }
    //將第二步放隊列中
    stepstone.push(pair<int, int>(find_starting_x(width, grid), 1));
    //並且給他對應的步數
    grid[stepstone.front().first][1] = 2;
    //直到無路可走，擴大到整個迷宮
    while (!stepstone.empty()) {
      //比較容易改寫與閱讀
      int x = stepstone.front().first;
      int y = stepstone.front().second;
      //讓後面比較容易閱讀
      pair<int, int> next;
      stepstone.pop();
      //可以往左走的條件
      //不會出界、沒走過
			//(因為是BFS所以不用比較大小，先走到的一定比較小)
      if (x - 1 >= 0 && grid[x - 1][y] == 1) {
        grid[x - 1][y] = grid[x][y] + 1;
        next.first = x - 1;
        next.second = y;
        stepstone.push(next);
      }
      if (x + 1 < width && grid[x + 1][y] == 1) {
        grid[x + 1][y] = grid[x][y] + 1;
        //這樣也可以但比較難理解
        stepstone.push(pair<int, int>(x + 1, y));
      }
			//不會出界、沒走過、可以往上、沒有覆蓋起點
      if (y - 1 >= 0 && grid[x][y - 1] == 1 && flowupward == 1 && y != 1) {
        grid[x][y - 1] = grid[x][y] + 1;
        next.first = x;
        next.second = y - 1;
        stepstone.push(next);
      }
      if (y + 1 < height && grid[x][y + 1] == 1) {
        grid[x][y + 1] = grid[x][y] + 1;
        next.first = x;
        next.second = y + 1;
        stepstone.push(next);
      }
    }
    cout << "Case " << tik << ":\n";
    for (int t1 = 0; t1 < height; t1++) {
      for (int t2 = 0; t2 < width; t2++) {
        if (t1 != 0 && grid[t2][t1] == 1)
          cout << "0 ";
        else
          cout << grid[t2][t1] << ' ';
      }
      cout << endl;
    }
  }
}