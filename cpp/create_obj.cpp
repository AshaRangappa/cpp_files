#include<iostream>
using namespace std;
class Base{
public:
	string name;
	void dis(){
	cout <<"hi" <<name <<endl;
	}
};

int main(){
Base *b1=new Base;
Base &b2=*b1;
b1->name="asha";
b1->dis();
b2.dis();
}
