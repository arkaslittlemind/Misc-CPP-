#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m) {
	cout << m.size() << endl;
	for (auto &pr : m) { // O(nlog(n))
		cout << pr.first << " " << pr.second << endl;
	}
}

int main() {
	map<int, string> m;
	m[1] = "abc"; // first way of inserting values
	m[5] = "cde"; // O(nlog(n))
	m[3] = "acd";
	m.insert({4, "afg"}); // second way of inserting values
	print(m);
}