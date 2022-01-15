/*
Given N strings, print unique strings in
lexicographical order with their
 frequency
N <= 10^5
|S| <= 100
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	map<string, int> mp;
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		mp[s]++;
	}
	for (auto &pr : mp) {
		cout << pr.first << " " << pr.second << endl;
	}
}
