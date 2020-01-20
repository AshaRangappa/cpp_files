#include<stdio.h>
#include<iostream>

class B{
public:virtual void dis(){
	printf("in B\n");
	}
};

class D:public B{
public:void dis(){
        printf("in D\n");
        }
}


