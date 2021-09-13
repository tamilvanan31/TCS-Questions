/*
Given a binary array of size T. 0 reperesents bike heading north and 1 represents bike heading south.
Task is to find the count of crossing bikes such that each pair of crossing bike (N, S), where 0 <= N < S < T 
is passing when N is running to the north and S is running to the south.
*/
//Solution:

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, ans = 0;
	cin >> T;
	vector<int> arr(T), temp(T);
	for(int i = 0; i < T; ++i) {
	    cin >> arr[i];
	}
    for(int i = T - 1; i >= 0; --i) {
        temp[i] = temp[i + 1] + arr[i];
    }
    for(int i = 0; i < T; ++i) {
        if(arr[i] == 0) {
            ans += temp[i + 1];
        }
    }
    cout << ans;
	return 0;
}
