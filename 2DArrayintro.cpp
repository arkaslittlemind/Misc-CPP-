#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            if(arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}


int main() {

    //create 2D array
    int arr[3][4];


    //taking inputs in array
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }

   //printing 2D array
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    } 

    cout << " Enter the Search Element" << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout <<"Element Found "<< endl;
    }
    else
        cout<<"Element Not Found";


    return 0;
}