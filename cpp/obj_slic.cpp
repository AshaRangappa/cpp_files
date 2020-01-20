#include <iostream>
using namespace std;
 
class Base
{
public:
Base(int a)
{
a_ = a;
}
 
void print()
{
cout<< "In Base::print() : a_ " << a_ <<endl;
}
 
private:
int a_;
};
 
class Derived : public Base
{
public:
Derived(int a, int b):Base(a)
{
b_ = b;
}
 
void print()
{
cout<< "In Derived::print() : b_ " << b_ <<endl;
}
 
private:
int b_;
};
 
void disp (Base ob)
{
ob.print();
}
 
int main()
{
Base b(10);
Derived d(15, 25);
 
disp(b);
disp(d); // slicing will happen
 
return 0;
}
 
