#include <bits/stdc++.h> 
using namespace std; 
  
// A generic function which finds minimum of two values 
// return type is type of variable which is minimum 
template <class A, class B> 
auto findMin(A a, B b)
{ 
    return (a < b) ? a : b; 
} 
  
// driver function to test various inference 
int main() 
{ 
    // This call returns 3.44 of doubale type 
    cout << findMin(4, 3.44) << endl; 
  
    // This call returns 3 of double type 
    cout << findMin(5.4, 3) << endl; 
  
    return 0; 
} 
