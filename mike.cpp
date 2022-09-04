#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> a;
map<ll,ll> mp;

ll C(ll n, ll r) {
	if(n <= 2) return 0;
	if(r == 3) {
		ll tmp = n * (n - 1);
		tmp /= 2;
		tmp *= (n - 2);
		tmp /= 3;
		return tmp;
	}
}

void solve() {
	ll n, k;
	cin >> n >> k;
	a.clear(); a.resize(n);
	mp.clear();
	
	for(int i=0;i<n;i++) {
		cin>>a[i];
		mp[a[i]]++;
	}
	ll num = C(mp[k], 3);
	ll den = C(n, 3);
	ll g = __gcd(num, den);
	num /= g;
	den /= g;
	cout << num << "/" << den << "\n";
}

int main() {
	 solve();
}