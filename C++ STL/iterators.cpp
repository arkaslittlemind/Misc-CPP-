#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec = {2, 3, 5, 6, 7};
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
	vector<pair<int, int>> vec_p = {{1, 2}, {2, 3}, {3, 4}};
	vector<pair<int, int>> :: iterator it;

	for (it = vec_p.begin(); it != vec_p.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	for (it = vec_p.begin(); it != vec_p.end(); it++) {
		cout << (it->first) << " " << (it->second) << endl;
	}

}