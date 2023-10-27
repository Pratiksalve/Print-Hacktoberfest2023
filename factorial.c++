#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
unsigned long long recursiveFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * recursiveFactorial(n - 1);
}

// Function to calculate factorial using iteration
unsigned long long iterativeFactorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    char choice;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Choose a method (R for recursive, I for iterative): ";
    cin >> choice;

    if (choice == 'R' || choice == 'r') {
        cout << "Factorial of " << num << " (using recursion) is " << recursiveFactorial(num) << endl;
    } else if (choice == 'I' || choice == 'i') {
        cout << "Factorial of " << num << " (using iteration) is " << iterativeFactorial(num) << endl;
    } else {
        cout << "Invalid choice. Please enter 'R' or 'I' for the method." << endl;
    }

    return 0;
}
