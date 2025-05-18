#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        bool liar = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum == 0 || sum == n){
            yes;
            continue;
        }
        else if(arr[0] == 0 && arr[1] == 0){
            yes;
            continue;
        }
        else if(arr[n-1] == 0 && arr[n-2] == 0){
            yes;
            continue;
        }
        else {
            int prev = arr[0];
            for(int i = 1 ; i <= n - 2 ; i++){
                if(prev ==  0 && arr[i] == 0){
                    liar = true;
                    break;
                }
                prev = arr[i];
            }
            if(liar){
                yes;
                continue;
            }
            else{
                no;
                continue;
            }
        }
    }

    return 0;
}
