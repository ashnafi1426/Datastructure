#include <iostream>
using namespace std;
//recursive approach
/*int sumRecursive(int n) {
    if (n == 1) return 1;           // Base case
    return n + sumRecursive(n - 1); // Recursive case
}

int main() {
    int n = 5;
    cout << "Recursive Sum: " << sumRecursive(n) << endl; // Output: 15
    return 0;
}
//iterative approach
int sumIterative(int n) {
  int res = 0;
  for (int i = 1; i <= n; ++i) res += i;
  return res;
}

int main() {
  int n = 5;
  cout << "Iterative Sum: " << sumIterative(n) << endl; // Output: 15
  return 0;
}*/
int sumrecursion(int n){
  if(n==1){
    return 1;
  }else{
    return n+sumrecursion(n-1);
  }
}
int main(){
 int n=6;
 cout<<"sum recursion  "<<sumrecursion(n)<<endl;
 return 0;
}