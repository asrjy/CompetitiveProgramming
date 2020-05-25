#include<iostream>
using namespace std;
int main(){
	int n, x, sum(-1), ans(0); cin >> n;
	for(int i =0; i < n; i++){
		cin >> x;
		sum += x;
	}
	for(int i = 0; i < 5; i++)
		if((sum+i)%(n+1) != 0){
			cout << "can show " << i << endl;
			ans++;
		}
	cout << ans << endl ;
	return 0;
}
