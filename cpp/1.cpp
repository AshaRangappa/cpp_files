#include<iostream>
#include<stdio.h>
class C;
class B{
private:
	int x;
public:
	void dis();
	friend void add(B,C);
};

class C{
private:
	int x;
public:
	void dis(){
	x=20;
	printf("this %u %u\n",this,&x);
	}
	friend void add(B,C);
};

void B :: dis(){
	x = 5;
	printf("value of x is %d\n",x);
	printf("this %u\n",this);
}
void add(B objb,C objc){
int sum=objb.x+objc.x;
printf("sum =%d\n",sum);
}
int main(){
	B b;
	b.dis();
	C c;
	c.dis();
	add(b,c);
}
