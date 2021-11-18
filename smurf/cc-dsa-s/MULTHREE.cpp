#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int k, d0, d1;
        cin >> k >> d0 >> d1;
        long long sum = d0 + d1, last = (d0 + d1)%10;
        for(int i =0; i < k-2; i++){
            sum += last;
            last = sum % 10;
        }
        if(sum % 3 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}