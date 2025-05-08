#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        vector<int> a;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num; cin >> num;
            a.push_back(num);
            sum += num;
        }   
        int l = 0;
        long long build_up_sum = 0;
        bool kam_sharse = false;
        for(int i = n - 1; i >= 0; --i ){
            if(kam_sharse){
                l += k;
                continue;
            }
            int skip = 0;
            build_up_sum += a[i];
            for(int j = 0; j < k; ++j){
                long long temp = (sum * j) + build_up_sum;
                if(temp < x) skip++;
                else {
                    l += (k - skip);
                    if(skip == 0) {
                        kam_sharse = true;
                    }
                    break;
                }
               
            }
        }
        cout << l << "\n";
        
    }
}