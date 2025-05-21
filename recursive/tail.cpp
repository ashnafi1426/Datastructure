#include <iostream>
using namespace std;

// Tail recursion - factorial
int factorial(int n, int result = 1) {
    if (n == 0) {
        return result; // Base case
    }
    return factorial(n-1, n * result); // Recursive call at end
}

// Tail recursion optimized version (compiler may convert to loop)
void printNumbers(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNumbers(n-1); // Tail call
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    cout << "Numbers from 5: ";
    printNumbers(5);
    cout << endl;
    return 0;
}