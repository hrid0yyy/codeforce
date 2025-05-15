#include <bits/stdc++.h>
using namespace std;
#define impossible cout << -1 << "\n"
#define vpii vector<pair<int, int>>
bool isTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) != 0;
}

bool isPointInsideTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int px, int py)
{
    return isTriangle(x1, y1, x2, y2, px, py) && isTriangle(x2, y2, x3, y3, px, py) && isTriangle(x3, y3, x1, y1, px, py);
}

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
        vpii coordinates;
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            coordinates.push_back({x, y});
        }

    }
    return 0;
}
