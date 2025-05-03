#include<bits/stdc++.h>
using namespace std;
#define msd multiset<double>
signed main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int n,l,num; cin >> n >> l; // n = #lanterns, l = length of road
    msd ms;
    for(int i = 0; i < n; ++i){
       cin >> num;
       ms.insert(num);
    }
    int prev = -1;
    double max_gap = INT_MIN;
    for(auto v: ms){
       if(prev == -1){
         prev = v;
         continue;
       }
       max_gap = max(max_gap,(v-prev)/2);
       prev = v;
    }
    max_gap = max(max_gap,max(*ms.begin(),l-*ms.rbegin()));
    cout << std::fixed << std::setprecision(10) << max_gap;
}