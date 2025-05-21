#include <iostream>
using namespace std;

// Tree recursion - Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2); // Multiple recursive calls
}

int main() {
    int num = 5;
    cout << "Fibonacci of " << num << " is " << fibonacci(num) << endl;
    return 0;
}