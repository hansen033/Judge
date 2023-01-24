#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, k;
	while(cin >> n >> k){
		//create array
		int ft = log2(k);
		int matrixes[ft+1][n+1][n+1], ans[2][n+1][n+1];
		fill(&matrixes[0][0][0], &matrixes[ft][n][n]+1, 0);
		
		//route input
		int a, b, c;
		while(cin >> a >> b >> c){
			if(a == 0 && b == 0 && c == 0)
				break;
			matrixes[0][a][b] = c;
		}
		
		//build table
		for(int t0 = 1; t0 <= ft; t0++){
			for(int t1 = 1; t1 <= n; t1++){
				for(int t2 = 1; t2 <= n; t2++){
					for(int t3 = 1; t3 <= n ; t3++){
						matrixes[t0][t1][t2] += matrixes[t0-1][t1][t3] * matrixes[t0-1][t3][t2];
					}
					matrixes[t0][t1][t2] = matrixes[t0][t1][t2] % 5281;
				}
			}
		}
		
		//ans
		for(int t1 = 0; t1 <= n; t1++){
			for(int t2 = 0; t2 <= n; t2++)
				ans[0][t1][t2] = matrixes[ft][t1][t2];
		}
		int left = k - pow(2, ft), cona = 1, conl = 0;
		for(int t0 = ft-1; t0 >= 0; t0--){
			if(left >= pow(2, t0)){
				fill(&ans[cona][0][0], &ans[cona][n][n]+1, 0);
				for(int t1 = 1; t1 <= n; t1++){
					for(int t2 = 1; t2 <= n; t2++){
						for(int t3 = 1; t3 <= n ; t3++){
							ans[cona][t1][t2] += ans[conl][t1][t3] * matrixes[t0][t3][t2];
						}
						ans[cona][t1][t2] = ans[cona][t1][t2] % 5281;
					}
				}
				swap(cona, conl);
				left -= pow(2, t0);
			}
		}
		
		//query
		int g, mb, nb;
		cin >> g;
		for(int t = 0; t < g; t++){
			cin >> mb >> nb;
			cout << ans[conl][mb][nb] << endl;
		}
	}
}