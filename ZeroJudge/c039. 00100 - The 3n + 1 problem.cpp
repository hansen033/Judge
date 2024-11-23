#include <iostream>
#include <map>
using namespace std;

map<int, long long> cycleLength;

long long proce(int n){
    if(n == 1)
        return 1;

    if(cycleLength.find(n) != cycleLength.end())
        return cycleLength[n];
    
    if(n % 2 == 0){
        cycleLength[n] = proce(n/2) + 1;
        return cycleLength[n];
    }

    cycleLength[n] = proce(n * 3 + 1) + 1;
    return cycleLength[n];
}

int main(){
    int i, j;
    int a, b;
    while(cin >> i){
        cin >> j;
        a = min(i, j);
        b = max(i, j);

        long long max = proce(i);
        for(int t = a + 1;  t <= b; t++){
            int temp = proce(t);
            if(temp > max)
                max = temp;
        }
        cout << i << ' ' << j << ' ' << max << endl;
    }
}