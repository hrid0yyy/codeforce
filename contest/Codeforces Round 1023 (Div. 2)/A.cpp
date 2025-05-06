#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int vectorGCD(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int result = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        result = gcd(result, nums[i]);
        if (result == 1) return 1; 
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    
    int totalGCD = vectorGCD(a);

   
    for (int i = 0; i < n; ++i) {
        vector<int> B = {a[i]}; 
        vector<int> C; 
        for (int j = 0; j < n; ++j) {
            if (j != i) {
                C.push_back(a[j]);
            }
        }

        int gcdB = vectorGCD(B);
        int gcdC = vectorGCD(C); 

        if (gcdB != gcdC) {
            cout << "Yes\n";
            vector<int> ans(n, 2); 
            ans[i] = 1; 
            for (int x : ans) {
                cout << x << " ";
            }
            cout << "\n";
            return;
        }
    }


    cout << "No\n";
    }

    return 0;
}