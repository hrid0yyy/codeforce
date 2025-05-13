#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);                       
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int ac = 0, bs = 0, slt = 0;
        for(int i = 0; i < n ; i++){
            if(s[i] == 'A'){
                ac++;
            }
            else if(s[i] == 'B'){
                bs++;
            }
            else{
                slt++;
            }
        }
       if(ac == n || bs == n){
        cout << n << "\n";
       }
       else if(ac + bs == n){
         cout << 1 << "\n";
       }
       else if(slt == n){
        cout << 2 << "\n";
       }
       else if(ac + slt == n || bs + slt == n){
        cout << (n-slt) << "\n";

       }
       else if(ac + bs + slt == n){
        cout << 1 << "\n";
       }
       
    }
}