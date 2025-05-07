#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    int n;
    cin >> n;
    vector<string> v(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i][0];
        auto it = find(v[i].begin(), v[i].end(), ' ');
        while (it != v[i].end())
        {
            cout << *(it + 1);
            v[i].erase(it);
            it = find(v[i].begin(), v[i].end(), ' ');
        }
        cout << endl;
    }
}