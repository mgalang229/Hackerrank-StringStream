#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	int cnt=0;
	for(int i=0; i<str.size(); i++){
		if(str[i+1]==','||str[i+1]=='\0'){
			cnt++;
		}
	}
	stringstream ss(str);
    char ch;
    int x, rep=0;
    vector<int> v;
    for(int i=0; i<cnt; ++i){
    	ss >> x >> ch;
    	v.push_back(x);
	}
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
