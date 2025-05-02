#include <bits/stdc++.h>
using namespace std;
template <typename S, typename T> void smax(S &a, T b) { if (a < b) a = b; }
template <typename S, typename T> void smin(S &a, T b) { if (a > b) a = b; }
template <typename T> void swap(T &a, T &b) { T t = a; a = b; b = t; }
#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size() // what it does is return the size of the vector or string x 
#define loop(i, a, b) for (int i = a; i < b; i++)
const int mxn = 1e5 + 5;
const int inf = 1e18;
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int cmd; cin >> cmd;
    int x = 0;
    for(int i = 0; i< cmd ;i++){
        string s; cin >>s;
        if(s=="++X" || s=="X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;
   
}