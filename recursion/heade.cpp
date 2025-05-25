#include<iostream>
using namespace std;
void headRecursion(int n) {
  if (n > 0) {
      headRecursion(n - 1);  // First statement
      cout << n << " ";      // Process after recursion
  }
}

int main() {
  headRecursion(3);  // Output: 1 2 3
  return 0;
}