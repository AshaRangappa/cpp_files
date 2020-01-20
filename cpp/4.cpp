#include<iostream>
#include<stdio.h>

class A{
private:int x;
public:
	A(){
		x=5;
	}
friend class B;
};
class B{
public:
	void shw(A &obj){
		printf("val of x is %d\n",obj.x);
	}	
};
int main(){
A a;
B b;
b.shw(a);
}
