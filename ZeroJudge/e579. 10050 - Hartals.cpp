#include <iostream>

int main(){
    int testCase, dates, partyCount;
    int party[100];
    std::cin >> testCase;
    while(testCase--){
        // input
        std::cin >> dates >> partyCount;
        for(int i = 0; i < partyCount; i++){
            std::cin >> party[i];
        }
        
        int hartal = 0;
        for(int day = 0, date = 1; date <= dates; date++, day = (day + 1) % 7){
            if(day == 5 || day == 6) continue;
            for(int t = 0; t < partyCount; t++){
                if(date % party[t] == 0){
                    hartal++;
                    break;
                }
            }
        }
        std::cout << hartal << std::endl;
    }
}