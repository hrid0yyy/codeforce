#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    vector<int[4]> v(test_case);
    for (int i = 0; i < test_case; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
    }
    int n, m, l, r, temp_l, temp_r, temp_m;
    for (int i = 0; i < test_case; i++)
    {
        // n m l r
        temp_m = 0, temp_l = 0, temp_r = 0;
        n = v[i][0], m = v[i][1], l = v[i][2], r = v[i][3];
        while (temp_m < m)
        {

            if (temp_l > l)
            {
                temp_l--;
                temp_m++;

                continue;
                ;
            }
            else if (temp_r < r)
            {
                temp_r++;
                temp_m++;
                continue;
                ;
            }
        }
        cout << temp_l << " " << temp_r << endl;
    }
}