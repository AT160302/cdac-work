#include <iostream>

using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int *a, int *b) {
    int temp = *a; // Store value at address 'a' in temp
    *a = *b;       // Copy value at address 'b' to address 'a'
    *b = temp;     // Copy temp value to address 'b'
}

int main() {
    int num1, num2;

    // Get input from user
    cout << "Enter first number (num1): ";
    cin >> num1;
    cout << "Enter second number (num2): ";
    cin >> num2;

    cout << "\nBefore swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Pass the memory addresses of num1 and num2
    swapNumbers(&num1, &num2);

    cout << "\nAfter swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}