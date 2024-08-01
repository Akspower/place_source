#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder;

    // Ask the user for a number
    cout << "Enter an integer: ";
    cin >> num;

    // Loop to reverse the digits of the number
    while (num != 0) { //check
        remainder = num % 10;           // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10;                      // Remove the last digit
    }

    // Output the reversed number
    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}
