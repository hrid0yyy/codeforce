#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int groups = 0;
    vector<int> v;
    int num;
    int mx = INT_MIN;
    int mn = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        if (num == 4)
        {
            groups++;
            continue;
        }

        if (v.empty())
        {
            v.push_back(num);
            mx = mn = num;
        }
        else if (num >= mx)
        {
            v.push_back(num);
            mx = num;
        }
        else if (num <= mn)
        {
            v.insert(v.begin(), num);
            mn = num;
        }
        else
        {
            auto it = v.begin();
            while (it != v.end() && *it < num)
                ++it;
            v.insert(it, num);
        }
    }
    int front = 0;
    int end = v.size() - 1;
    int temp = 0;
    while (front <= end)
    {
        temp += v[end];
        while (true)
        {
            if (v[front] + temp <= 4)
            {
                front++;
                temp += v[front];
            }
            else
            {
                end--;
                temp = 0;
                groups++;

                break;
            }
        }
    }
    cout << groups;
}