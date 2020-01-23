#include <iostream>
using namespace std;

class A
{
public:
	virtual void f(){cout << "A::f()" << endl;}
};

class B : public A
{
public:
	void f(){cout << "B::f()" << endl;}
};

int main()
{
/*	A a;
	B b;
	a.f();        // A::f()
	b.f();        // B::f()

	A *pA = &a;   
	B *pB = &b;   
	pA->f();      // A::f()
	pB->f();      // B::f()
	
	pA = &b;
	pB = &a;      // not allowed*/
	A a;
	B *b;
        B *pb = dynamic_cast<B*>(a); // allowed but it returns NULL
	if(pb !=NULL){
	pb->f();
	}
	else{
	cout <<"NULL" <<endl;
	}

	A *pB = dynamic_cast<A*>(a); // allowed but it returns NULL
        if(pB !=NULL){
        pB->f();
        }
        else{
        cout <<"NULL" <<endl;
        }

	return 0;
}
