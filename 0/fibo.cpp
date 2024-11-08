//Write a program to calculate Fibonacci numbers and find its step count.
#include <iostream>

using namespace std;

// Global variable for counting recursive steps
static int rsteps = 0;

// Recursive Fibonacci function
int recursiveFibonacci(int n) {
    rsteps++;
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

// Iterative Fibonacci function
void iterativeFibonacci(int n) {
    int isteps = 0;
    int prev1 = 0;
    int prev2 = 1;
    int curr = 0;
    
    for (int i = 2; i <= n; i++) {
        isteps++;
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    cout << curr << endl;
    cout << "Number of Steps: " << isteps << endl;
}

int main() {
    // Create a scanner object to read input
    int n;

    // Take the Fibonacci index from the user
    cout << "Enter n to Calculate nth Fibonacci Number: ";
    cin >> n;

    // Calculate and display Fibonacci number using the recursive approach
    cout << "The value of " << n << "th Fibonacci Number is:" << endl;
    cout << "Recursive Approach: " << recursiveFibonacci(n) << endl;
    cout << "Number of Steps: " << rsteps << "\n" << endl;

    // Calculate and display Fibonacci number using the iterative approach
    cout << "Iterative Approach: ";
    iterativeFibonacci(n);
    
    return 0;
}

