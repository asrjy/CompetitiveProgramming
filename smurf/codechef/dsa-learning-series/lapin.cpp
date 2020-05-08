#include<bits/stdc++.h>
using namespace std;
int main(){
    int i(0);
    string s, s1, s2;
    cin >> i;
    while(i--){
	cin >> s;
	if(s.length() % 2 == 0){
	    s1 = sort(s.begin(), s + s.length()/2 - 1);
	    s2 = sort(s + s.length()/2, s.end());
	    if(s1 == s2){
		cout << "YES" << endl;
	    } else {
		cout << "NO" << endl;
	    }
	} else {
	    s1 = sort(s.begin(), s + s.length()/2 -1);
	    s2 = sort(s+ s.length()/2 + 1, s.end());
	    if(s1 == s2){
		cout << "YES" << endl;
	    } else {
		cout << "NO" << endl;
	    }
	}
    }
    return 0;
}
