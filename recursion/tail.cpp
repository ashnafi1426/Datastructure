#include <iostream>
using namespace std;

void tailRecursion(int n) {
    if (n > 0) {
        cout << n << " ";  // Process before recursion
        tailRecursion(n - 1);  // Last statement
    }
}

int main() {
    tailRecursion(3);  // Output: 3 2 1
    return 0;
}