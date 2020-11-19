//question:Coins And Triangle
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll first = 1;
        ll last = n;
        ll ans = 0;
        while (first != last - 1)
        {
            ll mid = (first + last) / 2;
            if (mid * (mid + 1) / 2 == n)
            {
                ans = mid;
                break;
            }
            else if (mid * (mid + 1) / 2 < n)
            {
                first = mid;
            }
            else
                last = mid;
        }
        if (ans != 0)
            cout << ans << endl;
        else
            cout << first << endl;
    }
    return 0;
}
