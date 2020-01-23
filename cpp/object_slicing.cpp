#include<iostream>
/*object slicing */
using namespace std;

class Base{
protected:
        int i;
public:
	Base():i(5){}
virtual	void shw(){
		cout <<"base " <<i <<endl;	
	}
};

class Derived:public Base{
private:
	int z;
public:
	Derived():z(10){}
	void shw(){
		cout <<"derived" <<i <<z <<endl;
	}
};

void commonfunc(Base obj){
	obj.shw();
}

int main(){
Derived d;
commonfunc(d);
}
