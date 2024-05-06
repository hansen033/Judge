#include <iostream>
using namespace std;
int main()
{
	char o[10];
	int total ,f[2], gender = 0;
	// cout << "身份證字號檢查\n請輸入身份證字號:";
	
while(cin >> o){
	
	if ( o[1] == '1' || o[1] == '2' ){
		gender = 1;
	}
	switch (o[0]){
		case 'A':
		case 'a':
			f[0] = 1;
			f[1] = 0;
			break;
		case 'B':
		case 'b':
			f[0] = 1;
			f[1] = 1;
			break;
		case 'C':
		case 'c':
			f[0] = 1;
			f[1] = 2;
			break;
		case 'D':
		case 'd':
			f[0] = 1;
			f[1] = 3;
			break;
		case 'E':
		case 'e':
			f[0] = 1;
			f[1] = 4;
			break;
		case 'F':
		case 'f':
			f[0] = 1;
			f[1] = 5;
			break;
		case 'G':
		case 'g':
			f[0] = 1;
			f[1] = 6;
			break;
		case 'H':
		case 'h':
			f[0] = 1;
			f[1] = 7;
			break;
		case 'I':
		case 'i':
			f[0] = 3;
			f[1] = 4;
			break;
		case 'J':
		case 'j':
			f[0] = 1;
			f[1] = 8;
			break;
		case 'K':
		case 'k':
			f[0] = 1;
			f[1] = 9;
			break;
		case 'L':
		case 'l':
			f[0] = 2;
			f[1] = 0;
			// cout << "提示:2010年12月25日停發L";
			break;
		case 'M':
		case 'm':
			f[0] = 2;
			f[1] = 1;
			break;
		case 'N':
		case 'n':
			f[0] = 2;
			f[1] = 2;
			break;
		case 'O':
		case 'o':
			f[0] = 3;
			f[1] = 5;
			break;
		case 'P':
		case 'p':
			f[0] = 2;
			f[1] = 3;
			break;
		case 'Q':
		case 'q':
			f[0] = 2;
			f[1] = 4;
			break;
		case 'R':
		case 'r':
			f[0] = 2;
			f[1] = 5;
			// cout << "提示:2010年12月25日停發R";
			break;
		case 'S':
		case 's':
			f[0] = 2;
			f[1] = 6;
			// cout << "提示:2010年12月25日停發S";
			break;
		case 'T':
		case 't':
			f[0] = 2;
			f[1] = 7;
			break;
		case 'U':
		case 'u':
			f[0] = 2;
			f[1] = 8;
			break;
		case 'V':
		case 'v':
			f[0] = 2;
			f[1] = 9;
			break;
		case 'W':
		case 'w':
			f[0] = 3;
			f[1] = 2;
			break;
		case 'X':
		case 'x':
			f[0] = 3;
			f[1] = 0;
			break;
		case 'Y':
		case 'y':
			f[0] = 3;
			f[1] = 1;
			// cout << "提示:1975年停發Y";
			break;
		case 'Z':
		case 'z':
			f[0] = 3;
			f[1] = 3;
			break;
		defalt:
			cout << "error(可能是格式錯誤導致)";			
	}
	for ( int t = 0 ; t<10 ; t ++ ){
		o[t] = o[t] - 48;
	}	
	if ( (f[0] + f[1]*9 + o[1]*8 + o[2]*7 + o[3]*6 + o[4]*5 + o[5]*4 + o[6]*3 + o[7]*2 + o[8] + o[9]) % 10 == 0 && gender == 1 ){
		cout << "real" << endl;
	} else {
		cout << "fake" << endl;
	} 
	
}

	// system("pause"); 
	return 0; 
}