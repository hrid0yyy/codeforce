#include <bits/stdc++.h>

using namespace std;
#define yes cout << "YES\n";
#define no cout << "NO\n";
int found;
void func(bool visited[], int n, int m){
    if(n==m){
        found = 1;
        return;
    }
    if(n%3 != 0){
        return;
    } 
    if(!visited[n] && n%3==0 && found != 1){
      visited[n] = true;
      func(visited, n/3, m);
      func(visited, (n/3)*2, m);
    }
    
} 


void solve()
{
   found = 0;
   int n, m;
   cin >> n >> m;
   bool visited[n+1] = {false};
   func(visited, n, m);
   if(found){
      yes;
   }
   else {
    no;
   }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}



