#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int cnt = 0;int num = -1;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x > 0 && i <= k ){
            cnt++;
            num = x;
            continue;
        }
        if(num == x){
            cnt++;
            continue;
        }
        

    }
    cout << cnt << "\n";
    return 0;
}

