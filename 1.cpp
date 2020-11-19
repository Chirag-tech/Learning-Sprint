//question-multiple the array
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll prod = 1;
        for (int i = 0; i < n; i++)
            prod *= arr[i];
        cout << prod << endl;
    }
}
