#include <bits/stdc++.h>
#define MAX 100
using namespace std;

bool allones(string s, int n)
{
	int co = 0;
	for (int i = 0; i < s.size(); i++)
		co += (s[i] == '1');

	return (co == n);
}

int findlength(int arr[], string s, int n, int ind, int st,
			int dp[][3])
{
	if (ind >= n)
		return 0;

	if (dp[ind][st] != -1)
		return dp[ind][st];

	if (st == 0)
		return dp[ind][st]
			= max(arr[ind]
						+ findlength(arr, s, n, ind + 1, 1,
									dp),
					findlength(arr, s, n, ind + 1, 0, dp));

	else
		return dp[ind][st]
			= max(arr[ind]
						+ findlength(arr, s, n, ind + 1, 1,
									dp),
					0);
}

int maxLen(string s, int n)
{
	if (allones(s, n))
		return -1;

	int arr[MAX] = { 0 };
	for (int i = 0; i < n; i++)
		arr[i] = (s[i] == '0' ? 1 : -1);

	int dp[MAX][3];
	memset(dp, -1, sizeof dp);
	return findlength(arr, s, n, 0, 0, dp);
}

int main()
{
	string s;
    cin>>s;
	int n = s.length();
	cout << maxLen(s, n) << endl;
	return 0;
}
