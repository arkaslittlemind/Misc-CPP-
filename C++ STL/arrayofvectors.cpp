#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &vec) {
	cout << "Size: " << vec.size() << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
}


int main() {
	int N;
	cin >> N;
	vector<int> vec[N];

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			vec[i].push_back(x);
		}
	}
	for (int i = 0; i < N; i++) {
		printVec(vec[i]);
	}
}