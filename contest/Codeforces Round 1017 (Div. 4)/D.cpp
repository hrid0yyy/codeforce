#include <bits/stdc++.h>
using namespace std;

vector<pair<char,int>> charCounts(string p){
    int count = 0;
    char prev = p[0];
    vector<pair<char,int>> resultArr;
    for (int i = 0; i < size(p); ++i)
    {
      if(p[i] == prev){
        count++;
      }
      else{
        resultArr.push_back({prev, count});
        count = 1;
        prev = p[i];
      }

    }
    if(count > 0){
        resultArr.push_back({prev, count});
    }

   return resultArr;   
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;
        auto pArr = charCounts(p);
        auto sArr = charCounts(s);
        bool isEqual = true;
        for (int i = 0; i < size(pArr); ++i){
            if(pArr.size() != sArr.size()){
                isEqual = false;
                break;
            }
             if(sArr[i].first != pArr[i].first){
                isEqual = false;
                break;
             }
            if(pArr[i].second > sArr[i].second || pArr[i].second*2 < sArr[i].second){
                isEqual = false;
                break;
            }
        }
        if(isEqual){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
     
    }
}
