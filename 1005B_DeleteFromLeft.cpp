#include <bits/stdc++.h>

using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	
	int res = 0;
	
	int i = s.size();
	int j = t.size();
	
	bool diff = false;
	while(!diff) {
		--i;
		--j;
		
		if(i < 0 || j < 0) {
			diff = true;
			res = (s.size() - (s.size() - (i + 1))) + (t.size() - (t.size() - (j + 1)));
		} else {
			char s1 = s.at(i);
			char t1 = t.at(j);
			
			if (s1 != t1) {
				diff = true;
				res = (s.size() - (s.size() - (i + 1))) + (t.size() - (t.size() - (j + 1)));
			}
		}
	}
	
	cout << res << endl;
}
