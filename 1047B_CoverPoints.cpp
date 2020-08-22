#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int max = 0;
	while (n--) {
		int x, y;
		cin >> x >> y;
		if(max < (x + y)) max = x + y;
	}
	cout << max << endl;
}
