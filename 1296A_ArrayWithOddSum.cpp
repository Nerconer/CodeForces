#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int sum = 0;
		bool even = false, odd = false;
		for(int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			sum += a;
			even |= a % 2 == 0;
			odd |= a % 2 != 0;
		}
		if( sum % 2 != 0 || (even && odd)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
