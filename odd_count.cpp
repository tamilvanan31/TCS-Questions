/*
Odd count of Ballon.
Given a string find the character with odd frequency.

Solution:
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for(int i = 0; i < s.size(); ++i) {
        mp[s[i]]++;
    }
    for(auto c: mp) {
        if(c.second%2) cout << c.first << endl;
    }

    return 0;
}
