#include<iostream>
using namespace std;

class Base{
protected:int i;
public:Base(){
	i=3;
	};
	virtual void dis(){
	cout <<"Base" <<i <<endl;
	}
};

class Derived:protected Base{
protected:int j;
public:Derived(){
	j=5;
	}
	virtual void dis(){
	cout <<"Derived" <<j <<endl;
	}
};

void smefun(Base &obj){
obj.dis();
}

int main(){
Derived d;
//Base &b=d;
d.dis();
//smefun(b);
//smefun(d);
}
