#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	char arr[n];
	
	for(int i = 0; i < n; ++i) {
		arr[i] = 'o';
	}
		
	int x, y;
	x = y = 1;
	int tmp;
	while(y <= n) {
		arr[y - 1] = 'O';
		tmp = y;
		y = y + x;
		x = tmp;
	}
	
	for(int i = 0; i < n; ++i) {
		cout << arr[i];
	}
}
