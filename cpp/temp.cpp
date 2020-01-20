#include<iostream>
#include<vector>

using namespace std;
template <class T>

class Base{
private:T data;
public:
	void shw(T val){
	data=val;
	cout <<"value " <<data <<endl;
	}
};

int main(){
Base<int> b;
vector<b> v;
for(auto it=0;it<=5;it++);{
v.push_back(shw(it));
}
Base<string> b1;
b1.shw("asha");
}
