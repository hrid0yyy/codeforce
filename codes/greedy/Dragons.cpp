#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
struct customComp {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        if (a.first != b.first)
            return a.first < b.first;             
        return a.second > b.second;           
    }
};
int main(){
    cin.tie(0);
    int s,n;
    cin >> s >> n;
   
    multiset<pi, customComp> data;
    for(int i = 0; i< n; ++i){
        pi temp;
        cin >> temp.first >> temp.second;
        data.insert(temp);
    }
    int res = 1;
    for(auto v: data){
        if(s <= v.first){
            res = 0;
            break;
        }
        else {
             s += v.second; 
        }
    }
   res == 1 ? cout << "YES" : cout << "NO";

}