#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    int inps[3][3];
    int outs[3][3] = 1;
    for(i = 0; i < 3; i++)
	for(j = 0; j < n; j++){
	    cin >> n;
	    n%2==0?inps[i][j]=0:inps[i][j]=1;
	}
    }
    for(i = 0; i < 3; i++){
	for(j = 0; j < 3; j++){
	    if(inps[i][j] == 1){
		outs[i][j]=abs(outs[i][j]-1);
		outs[i+1][j] = abs(outs[i+1][j]-1);
		outs[i-1][j] = abs(outs[i-1][j]-1);
		outs[i+1
	    }
	}
    }


