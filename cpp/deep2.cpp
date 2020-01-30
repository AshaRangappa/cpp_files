#include<iostream>
#include<stdio.h>

class B{
public:
	int *p;
	B(){
	p=new int;
	}
	void set(int y){
	*p=y;
	}
	void dis(){
		printf("x val is %d\n",*p);
	}
	B(B &obj){
	p=new int;
	*p=*(obj.p);
        }
};

int main(){
B b;
b.set(10);
b.dis();
B c=b;
c.set(20);
c.dis();
b.dis();
}
