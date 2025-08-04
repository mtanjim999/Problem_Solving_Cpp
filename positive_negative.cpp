#include<iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (x > 0) {
        cout << "This is a positive number." << endl;
    } else if (x < 0) {
        cout << "This is a negative number." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

