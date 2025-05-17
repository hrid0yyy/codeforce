#include <bits/stdc++.h>
using namespace std;
#define alice cout << "Alice\n"
#define bob cout << "Bob\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int bh, bl = -1;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'B' && bl == -1){
                bl = i;
                bh = i;
                continue;
            }
            if(s[i] == 'B'){
                bh = i;
                continue;
            }
        }
        int pos;
        bool aw = false;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'A'){
                if(i == 0 && bl == n-1){
                    aw = true;
                    break;
                }
                else if(i > 0 && i != n - 1 && bh < i){
                    aw = true;
                    break;
                }
                else if(i == n-1 && bl != 0){
                    aw = true;
                    break;
                }
            }
            else continue;
        }
        if(aw){
            alice;
        }
        else{
            bob;
        }
        
    }

    return 0;
}

