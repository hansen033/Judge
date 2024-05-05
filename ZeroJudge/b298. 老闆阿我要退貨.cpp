#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
	int a, b, c, d, temp;
	//廠商數量、關係數量、問題廠商數量、問題數量
	while(cin >> a >> b >> c >> d){
		vector<int> asso[10001];
		int m, n;
		//供應鏈關係
		for(int t = 0 ; t < b ; t ++){
			cin >> m >> n;
			asso[m].push_back(n);
		}
		//0:無 3:帶原 1:被影響
		int state[10001] = {0};
		queue<int> que;
		//問題廠商
		for(int t = 0 ; t < c ; t ++){
			cin >> temp;
			state[temp] = 3;
			que.push(temp);
		}
		//處理
		while(!que.empty()){
			for(int t=0; t<asso[que.front()].size(); t++){
				if(state[asso[que.front()][t]]==0){
					state[asso[que.front()][t]] = 1;
					que.push(asso[que.front()][t]);
				}
			}
			que.pop();
		}
		//查詢
		for(int t = 0 ; t < d ; t ++){
			cin >> temp;
			if(state[temp] == 1 || state[temp] == 3){
				cout << "TUIHUOOOOOO\n";
			}else{
				cout << "YA~~\n";
			}
		}
	}
}