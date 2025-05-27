#include "stack.h"
#include <iostream>
using namespace std;

bool isPalindrome(const string& str) {
    Stack s;
    int length = str.length();
    int mid = length / 2;

    for (int i = 0; i < mid; i++) {
        s.push(str[i]);
    }

    for (int i = (length % 2 == 0 ? mid : mid + 1); i < length; i++) {
        if (s.pop() != str[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input))
        cout << "Palindrome\n";
    else
        cout << "Not a palindrome\n";

    return 0;
}

