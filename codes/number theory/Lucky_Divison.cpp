#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    int n; cin >> n;
    bool isLucky = false;
    vector<int> lucky = {4,7,44,47,74,77,444,447,474,744,774,747,477 };
    for(int i = 0; i < size(lucky) ; ++i){
        if(n % lucky[i] == 0) {
            isLucky = true;
            break;
        } 
    }
    isLucky ? cout << "YES" : cout << "NO";
    return 0;
}