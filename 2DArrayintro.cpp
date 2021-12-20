#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col) {
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            if(arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}

//to print column wise sum
void printColSum(int arr[][3], int row, int col) {
    cout <<"Printing Sum -> "<< endl;
    for(int col = 0; col < 3; col++) {
        int sum = 0;
        for(int row = 0; row < 3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
//to print row wise sum
void printSum(int arr[][3], int row, int col) {
    cout <<"Printing Sum -> "<< endl;
    for(int row = 0; row < 3; row++) {
        int sum = 0;
        for(int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {

    //create 2D array
    int arr[3][3];

    cout << "Enter the Elements" << endl;
    //taking inputs in array
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cin >> arr[row][col];
        }
    }

   //printing 2D array
    cout << "The elements are" << endl;
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    } 

    cout << " Enter the Search Element" << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)){
        cout <<"Element Found "<< endl;
    }
    else
        cout<<"Element Not Found";

    printSum(arr, 3, 3);

    printColSum(arr, 3, 3);

    return 0;
}