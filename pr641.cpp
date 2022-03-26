#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;

        int n = s.size();
        vector<vector<int>> A(26, vector<int>());

        for (int i = 0; i < n; i++)
            A[s[i] - 'a'].push_back(i);

        map<int, int> mp;

        int ind = -1;

        for (int i = 0; i < n; i++)
        {
            int tmp = mp[s[i] - 'a'];

            if (A[s[i] - 'a'].size() - tmp > 1)
            {
                ind = i;
            }
            else
                break;

            mp[s[i] - 'a']++;
        }

        string ans = "";
        for (int i = ind + 1; i < n; i++)
            ans.push_back(s[i]);

        cout << ans << endl;
    }
    return 0;
}