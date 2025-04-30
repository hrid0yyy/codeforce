#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<int> levels_passed;
    int p,q,num;
    cin >> p;
    for(int i = 0;i< p;++i){
        cin >> num;
        levels_passed.insert(num);
    }
    cin >> q;
    for(int i = 0;i< q;++i){
        cin >> num;
        levels_passed.insert(num);
    }
    if(levels_passed.size()==n){
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }
    
}