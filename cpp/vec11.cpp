#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
g1.pop_back();
for (auto i = g1.begin(); i!=g1.end(); ++i){
//g1.pop_back();
cout <<  *i << " ";
}
g1.resize(2);
cout << "The size of vector is " << g1.size(); 
    cout << "\nThe maximum capacity is " << g1.capacity();
cout << "\nThe maximum iize s " << g1.max_size();

    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
  
    return 0; 
} 
