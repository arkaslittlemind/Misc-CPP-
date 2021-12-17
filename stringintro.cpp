#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp; 
    }
}



bool checkPalindrome(char a[], int n) {
    int start = 0;
    int end = n - 1;
    while(start < end) {
        if(toLowerCase(a[start]) != toLowerCase(a[end])) {
            return 0;
        }
        else {
            start++;
            end--;
        }
    }    
    return 1;
}

void reverse(char name[], int n) {
    int start = 0;
    int end = n - 1;
    while(start < end) {
        swap(name[start++], name[end--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}



int main() {

    char name[20];

    cout << "Enter your name: "<< endl;
    cin >> name;

    cout << "Your name is " << name << endl;
    int length = getLength(name);

    cout << "The length of your name is " << length << endl;
    reverse(name, length);
    cout << "Your name reversed is " << name << endl;

    cout << "Is your name a palindrome? " << checkPalindrome(name, length) << endl;
    
    cout << "Character is " << toLowerCase('b') << endl;
    cout << "Character is " << toLowerCase('C') << endl;
    
    return 0;

}