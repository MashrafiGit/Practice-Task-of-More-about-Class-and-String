#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, t;
        cin >> s >> t;
        string x = "";

        int i = 0;
        while (i < s.size() || i < t.size())
        {
            if (i < s.size())
                x.push_back(s[i]);
            if (i < t.size())
                x.push_back(t[i]);
            i++;
        }

        cout << x << endl;
    }

    return 0;
}
