#include<bits/stdc++.h>
using namespace std;
#define msi map<string, int>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    msi scoresheet;
    while(n--){
        string s; cin >> s;
        scoresheet[s]++;
    }
    int teams = scoresheet.size();
    if(teams == 1){
        auto t1 = *scoresheet.begin();
        cout << t1.first;
    }
    else {
        auto t1 = *scoresheet.begin();
        auto t2 = *scoresheet.rbegin();
        t1.second > t2.second ? cout << t1.first :  cout << t2.first; 
    }
}