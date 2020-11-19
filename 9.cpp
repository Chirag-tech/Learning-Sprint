//question:Minion Chef and Bananas
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll bSearch(ll arr[], ll mid, ll n, ll hr)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += ceil(double(arr[i]) / mid);
    }
    return (sum <= hr);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, hr;
        cin >> n >> hr;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll high = *max_element(arr, arr + n);
        ll low = 1, ans = 0;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            if (bSearch(arr, mid, n, hr))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout << ans << endl;
    }
}