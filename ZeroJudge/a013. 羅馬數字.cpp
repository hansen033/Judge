#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;

map<char, int> rmn_int = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
                          {'C', 100}, {'D', 500}, {'M', 1000}};
pair<int, string> int_rmn[13] = {{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, 
                                 {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};

int str_int(string input);
string int_str(int input);

int main(){
    string rmnA, rmnB;
    while(cin >> rmnA){
        if(rmnA == "#")
            return 0;
        cin >> rmnB;
        cout << int_str(abs(str_int(rmnA) - str_int(rmnB))) << endl;
    }
    
}

int str_int(string input){
    int largest = 0, result = 0;
    for(int t = input.length() - 1; t >= 0 ; t--){
        if(rmn_int[input[t]] < largest){
            result -= rmn_int[input[t]];
        }else{
            if(rmn_int[input[t]] > largest){
                largest = rmn_int[input[t]];
            }
            result += rmn_int[input[t]];
        }
    }
    return result;
}

string int_str(int input){
    if(input == 0)
        return "ZERO";
    string result;
    for(int t = 12; t >= 0; t--){
        if(input >= int_rmn[t].first){
            result.append(int_rmn[t].second);
            input -= int_rmn[t].first;
            t++;
        }
    }
    return result;
}