#include <iostream>
using namespace std;

// Head recursion - counts down from n
void countDown(int n) {
    if (n == 0) {
        return; // Base case
    }
    countDown(n-1); // Recursive call first
    cout << n << " "; // Processing after
}

int main() {
    cout << "Countdown from 5: ";
    countDown(5);
    cout << endl;
    return 0;
}