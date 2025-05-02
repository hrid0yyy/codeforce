#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
    cin.tie(0);
    int n; cin >> n;
    vi nums(n);
    int odd_c = 0, even_c = 0, last_e, last_o;
    for(int i=0 ; i<n ; ++i){
        cin >> nums[i];
        if(nums[i] & 1){
            odd_c++;
            last_o = i;
        }
        else{
            even_c++;
            last_e = i;
        }
    }
    odd_c > even_c ? cout << ++last_e : cout << ++last_o;
}