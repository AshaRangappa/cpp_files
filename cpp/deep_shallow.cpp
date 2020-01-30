#include<iostream>

using namespace std;

class Base{
private:
	int *ptr;
public:
	Base(){
	ptr=new int;
	}
	Base(const Base &b){
	ptr=new int;
	*ptr=*(b.ptr);	
	}
	void shw(int i){
		*ptr=i;
	}
	void dis(){
		cout << *ptr <<endl;
	}
};

int main(){
Base obj1;
obj1.shw(5);
obj1.dis();
Base obj2=obj1;
obj2.shw(6);
obj1.dis();
obj2.dis();
}
