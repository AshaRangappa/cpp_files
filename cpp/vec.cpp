#include <iostream> 
#include <vector> 
#include <iterator>
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
	g1.push_back(100);  
g1.push_back(200);
g1.push_back(300);
while(!g1.empty()){
	cout << g1.back();
	g1.pop_back();
}
    return 0; 
}
