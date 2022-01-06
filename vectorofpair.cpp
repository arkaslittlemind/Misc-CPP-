#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &vec){
    cout << "Size: " << vec.size() << endl;
    for(int i  = 0; i < vec.size(); i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl;
}


int main() {

    vector<pair<int, int>> vec;
    printVec(vec);
    
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int x, y;
    cout << "Enter elements";
    for(int i = 0 ; i , n; i++){
    cin >> x >> y;
    vec.push_back({x, y});
}
    printVec(vec); 
}