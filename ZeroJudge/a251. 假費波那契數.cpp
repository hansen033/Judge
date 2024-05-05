#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int operation;
	for(cin>>operation; operation>0; operation--){
		int N, data[20];
		cin>>N;
		for(int t=0; t<4; t++)
			cin>>data[t];
		for(int t=4; t<N; t++)
			data[t]=data[t-4]+data[t-1];
		sort(data, data+N);
		cout<<data[N/2]<<"\n";
	}
}