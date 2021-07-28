#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		string s;
		cin >> n >> s;
		string pattern = s;
		sort(pattern.begin(), pattern.end());
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cnt += (s[i] != pattern[i]);
		}
		cout << cnt << '\n';
	}
	return 0;
}
