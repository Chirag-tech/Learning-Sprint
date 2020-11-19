//question:Studying Alphabet
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool flag = true;
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        str.push_back(st);
    }
    for (int i = 0; i < n; i++)
    {
        string curstr = str[i];
        for (int i = 0; i < curstr.length(); i++)
        {
            if (s.find(curstr[i]) == string::npos)
            {
                cout << "No" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        flag = true;
    }
}