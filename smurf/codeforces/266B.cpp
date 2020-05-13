#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, t, x;
    cin >> n >> t;
    string og_ord;
    cin >> og_ord;
    int len = og_ord.length();
    x = len-1;
    char fin_ord[len];
    for(int i = 0; i < len; i++){
	if(og_ord[i] == 'B'){
	    if(i < len-t){
		fin_ord[i+t] = 'B';
	    } else if(i > len-t){
		fin_ord[x] = 'B';
		x--;
	    }
	}
    }
    return 0;
}
