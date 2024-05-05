#include <iostream>
#include <unordered_map>

int main(){
	int N, Q;
	std::cin >> N >> Q;
	int parent[30001];
	std::unordered_map<int, int> distance[30001];
	// for(int t = 0; t <= N; t++)
		// distance[t] = new int[30001];
	//std::cout << "finished\n";
	std::fill(parent, parent+N+1, 0);
	//std::fill(&distance[0][0], &distance[N][N]+1, -1);
	// for(int t1 = 0; t1 <=N; t1++){
		// for(int t2 = 0; t2 <=N; t2++){
			// distance[t1][t2] = -1;
		// }
	// }
	//relation input
	int temp;
	for(int t0 = 1; t0 <= N; t0++){
		while(std::cin >> temp){
			if(temp == 0)
				break;
			parent[temp] = t0;
		}
	}
	//distance process
	for(int t0 = 0; t0 <= N; t0++){//more test for starting from 1
		temp = t0;
		distance[t0][t0] = 0;
		while(temp != 0){
			// if(temp < 0 || temp > N){
				// std::cout << "dp/temp:" << temp << "N:" << N << "t0:" << t0 << "\n";
				// break;
			// }
			distance[parent[temp]][t0] = distance[temp][t0] + 1;
			temp = parent[temp];
		}
	}
	//query process
	int temp1, temp2, ansa, ansb;
	for(int t0 = 0; t0 < Q; t0++){
		ansa = -1;
		std::cin >> temp1 >> temp2;
		if(temp1 < 0 || temp2 < 0 || temp1 > N || temp2 > N){
			std::cout << "iperrtemp1:" << temp1 << "temp2:" << temp2 << "\n";
			break;
		}
		for(int t1 = 1; t1 <= N; t1++){
			if(distance[t1].find(temp1) != distance[t1].end() && distance[t1].find(temp2) != distance[t1].end()){
				if(ansb > distance[t1][temp1] + distance[t1][temp2] || ansa == -1){
					ansa = t1;
					ansb = distance[t1][temp1] + distance[t1][temp2];
				}
			}
		}
		std::cout << ansa << " " << ansb << std::endl;
	}
	
}