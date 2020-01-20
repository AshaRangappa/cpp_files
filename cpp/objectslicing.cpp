#include<stdio.h>
#include<iostream>

class A{
public:int a,b;
	A(int x,int y){
	a=x;
	b=y;
	}
	virtual void dis(){
	printf("Base a %d b %d\n",a,b);
	}
};

class B:public A{
public:int c;
	B(int x,int y,int z):A(x,y){
	c=z;
	}
	virtual void dis(){
	printf("Derived a %d b %d c is %d\n",a,b,c);
	}
};

void shw(A &ob){
ob.dis();
}

int main(){
A a(1,2);
B b(3,4,5);
a.dis();
b.dis();
shw(a);
shw(b);
}
