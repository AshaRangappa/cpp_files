#include <bits/stdc++.h> 
using namespace std; 
/*
The line,
transform(arr, arr+n, arr, increment(to_add));

is the same as writing below two lines,
// Creating object of increment
increment obj(to_add); 

// Calling () on object
transform(arr, arr+n, arr, obj); 
*/
  
// A Functor 
class increment 
{ 
private: 
    int num; 
public: 
    increment(int n) : num(n) {  } 
  
    // This operator overloading enables calling 
    // operator function () on objects of increment 
    int operator () (int arr_num) const { 
	cout <<"am here" <<endl;
        return num + arr_num; 
    } 
}; 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int to_add = 5; 
  
    transform(arr, arr+n, arr, increment(to_add)); 
  
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
} 
