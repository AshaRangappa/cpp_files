#include<iostream>
#include<stdio.h>

class gf{
private:
	static int cnt;
public:
	void dis(){
		printf("value of cnt %d\n",cnt++);
	}
};

int gf :: cnt =0;

int main(){
gf o1;
o1.dis();
gf o2;
o2.dis();
gf o3;
o3.dis();
}
