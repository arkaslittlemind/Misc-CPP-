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
	m[5] = "cdc"; // O(log(n))
	m[3] = "acd";
	m[6] = "a";
	m[5] = "cde";
	auto it = m.find(1); // O(log(n))
	//m.erase(3);
	if (it != m.end())
		m.erase(it);
	//if (it == m.end()) {
	//cout << "No Value";
	//} else {
	//cout << (*it).first << " " << (*it).second << endl;
	//}
	print(m);
}
