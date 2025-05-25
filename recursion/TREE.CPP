#include<iostream>
using namespace std;
void treeRecursion(int n) {
  if (n > 0) {
      cout << n << " ";
      treeRecursion(n - 1);  // First call
      treeRecursion(n - 1);  // Second call
  }
}

int main() {
  treeRecursion(4);  // Output: 3 2 1 1 2 1 1
  return 0;
}