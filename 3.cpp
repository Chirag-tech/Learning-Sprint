//Making a Meal
#include <bits/stdc++.h>
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
        vector<string> str;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            str.push_back(s);
        }
        vector<string>::iterator it;
        int frequency[26] = {0};
        for (it = str.begin(); it != str.end(); it++)
        {
            string curstr = *it;
            for (int i = 0; i < curstr.length(); i++)
            {
                int index = int(curstr[i]) - 97;
                frequency[index]++;
            }
        }
        int ans = 0;
        int nc = frequency[2];
        int nd = frequency[3];
        int ne = frequency[4];
        int no = frequency[14];
        int nf = frequency[5];
        int nh = frequency[7];
        cout << min({nc / 2, ne / 2, nd, no, nf, nh}) << endl;
    }
    return 0;
}
