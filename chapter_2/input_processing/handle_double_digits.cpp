#include <iostream>
using std::cin;
using std::cout;

int doubleDigitValue(int digit) {
    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit >= 10) sum = 1 + doubledDigit % 10;
    else sum = doubledDigit;
    return sum;
}

int main() {
    int digit;
    cout << "Enter a single digit number, 0-9: ";
    cin >> digit;
    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit >= 10) sum = 1 + doubledDigit % 10;
    else sum = doubledDigit;
    cout << "Sum of digits in doubled number: " << sum << "\n";
}