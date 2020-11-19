//question:Shortest Palindromic Substring
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        char ans = str[0];
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i] < ans)
                ans = str[i];
        }
        cout << ans << endl;
    }
    return 0;
}
