#include<iostream>
#include<vector>

using namespace std;

int main(){

//1.auto in c++11
auto i=5;

//2.nullptr instead of NULL	
int *ptr=nullptr; 
int *old_ptr=NULL; 
cout <<"i " <<5 <<endl;
cout <<"ptr " <<ptr <<" " <<old_ptr <<endl;

//3. Range_based for loop in c++11
int a[]={0,1,2,3,4,5};
for(int n: a)
	cout <<"for a " <<n <<endl;

std::vector<int> v = {0, 1, 2, 3, 4, 5}; 
for(auto val : v) 
std::cout << val << ' ' <<endl;

}
