#include<iostream>
using namespace std;

class Base{
public:
	int i;
/*	virtual void dis(){
	}*/
};

int main(){
Base b;
cout <<sizeof(b) <<endl;
}
