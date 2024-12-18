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
    char digit;
    int checksum = 0;
    cout << "Enter a six-digit number: ";
    for (int position = 1; position <= 6; position++) {
        cin >> digit;
        if (position % 2 == 0) checksum += digit - '0';
        else checksum += doubleDigitValue(digit - '0');
    }
    cout << "Checksum is " << checksum << ". \n";
    if (checksum % 10 == 0) {
        cout << "Cheksum is divisible by 10. Valid. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}