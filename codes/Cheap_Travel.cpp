#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int v1 = (n/m)*b + (n%m)*a;
    int v2 = ceil((float)n/(float)m)*b;
    int v3 = n*a;
    cout <<  min(min(v1,v2),v3); 
}