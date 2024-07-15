#include <iostream>
using std::cin;
using std::cout;

int main() {
    char digit;
    cout << "Enter a one-digit number: ";
    digit = cin.get();
    int sum = digit - '0';
    cout << "Is the sum of digits " << sum << "? \n";
}