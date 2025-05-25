#include<iostream>
using namespace std;
int fibRecursive(int n) {
  if (n == 0 || n == 1) return n;                     // Base case
  return fibRecursive(n - 1) + fibRecursive(n - 2);   // Recursive case
}

int main() {
  int n = 6;
  cout << "Recursive Fibonacci: " << fibRecursive(n) << endl; // Output: 8
  return 0;
}