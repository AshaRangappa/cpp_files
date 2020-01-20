#include<iostream>
#include<stdio.h>

class B{
public:
virtual	void dis(){
		printf("B\n");
	}
virtual	~B(){
	printf("destruct B\n");
	}
};

class D1:virtual public B{
public:
void dis1(){
                printf("D1\n");
        }

	~D1(){
	printf("destruct D!\n");
	}
};

class D2:virtual public B{
public:
void dis1(){
                printf("D2\n");
        }
~D2(){
        printf("destruct D2\n");
        }
};

class D12:public D1,public D2{
public:
void dis1(){
                printf("D12\n");
        }
~D12(){
        printf("destruct D!2\n");
        }
};

int main(){
B *b1;
//D12 d;
b1=new D12;
b1->dis();
delete b1;
}
