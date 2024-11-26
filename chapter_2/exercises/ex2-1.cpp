#include <iostream>
using std::cin;
using std::cout;

int main() {
    int counter = 0;

    for (int row = 1; row <= 4; row++) {
        for (int spaceCounter = 1; spaceCounter < row; spaceCounter++) {
            cout << " ";
        }

        for (int hashNum = 1; hashNum <= 9 - row - counter; hashNum++) {
            cout << "#";
        }

        cout << "\n";

        counter++;
    }

    return 0;
}