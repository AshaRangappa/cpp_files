#include<iostream>
#include<stdio.h>

class B{
private:
	int *p;
public:
	B(){
	p=new int;
	}
	void set(int y){
	*p=y;
	}
	void dis(){
	printf("val of p %d\n",*p);
	}
	B(B &obj){
	printf("in cpy cond\n");
	p=new int;
	*p=*(obj.p);
	}
/*	B& operator=(const B &obj){
        printf("in ass cond\n");
        p=new int;
        *p=*(obj.p);
	}*/
};
int main(){
B b;
b.set(10);
b.dis();
B c;
c.set(20);
c.dis();
b=c;
b.dis();
b.set(10);
c.dis();
b.dis();
}
