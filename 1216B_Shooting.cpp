#include <bits/stdc++.h>

using namespace std;

void sortDescArr(vector<pair<int,int>> &vec, int n) {
	for (int i = 1; i < n; ++i) {
		pair<int,int> key = vec[i];
		int j = i - 1;
		while(j >= 0 && key.first > vec[j].first) {
			vec[j + 1] = vec[j];
			vec[j] = key;
			--j;
		}
	}
}

int main() {
	int n, a;
	cin >> n;
	int ans = 0;
	vector<pair<int,int>> vec;
	for(int i = 0; i < n; ++i) {
			cin >> a;
			vec.emplace_back(a, i);
	}
	
	sortDescArr(vec, n);
	
	for(int i = 0; i < n; ++i) {
		ans += (vec[i].first * i) + 1;
	}
	
	cout << ans << endl;
	
	for(auto iter: vec) {
		cout << (iter.second + 1) <<  " ";
	}
}
