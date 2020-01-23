#include<iostream>

using namespace std;

class Base{
public:
	virtual void fun(){
		cout <<"in base class" <<endl;
	}
};
class Derived:public Base{
public:
        void fun(){
                cout <<"in derived class" <<endl;
	}
};

int main(){
/*Derived d;
Base *b=dynamic_cast<Base*>(&d);*/

Base *b=new Derived;
Derived *d=dynamic_cast<Derived*>(b);
	if(d!=NULL){
		d->fun();
		cout <<"valid" <<endl;}
	else
		cout <<"nooooo valid" <<endl;

	
}

