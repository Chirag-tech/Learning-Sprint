//question:Fit Squares in Triangle
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int solve(int ans, int n)
{
    if (n <= 2)
        return ans;
    ans += (n - 2) / 2;
    return solve(ans, n - 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        cout << solve(ans, n) << endl;
    }
    return 0;
}
