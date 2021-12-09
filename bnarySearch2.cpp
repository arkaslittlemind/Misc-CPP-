#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin >> n;
    int to_find;
    cout<<"Enter the element to be searched: ";
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the elements: ";
        cin >> v[i];
    }

    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (v[mid] < to_find) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    if (v[lo] == to_find) {
        cout << lo << endl;
    }
    else if (v[hi] == to_find) {
        cout << hi << endl;
    }
    else {
        cout << "NOT FOUND";
    }
}