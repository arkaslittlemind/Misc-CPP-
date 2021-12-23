#include<bits/stdc++.h>
using namespace std;
int main() {

    int num = 5;

    cout << num << endl;

    //address of operator -> &

    cout << " Address of num is: " << &num << endl;

    int *ptr = &num;

    cout << "The Address is " << ptr << endl;    
    cout << "The Value is " << *ptr << endl;


    double d = 4.3;
    double *p2 = &d;

    cout << "The Address is " << p2 << endl;    
    cout << "The Value is " << *p2 << endl;

    return 0;
} 