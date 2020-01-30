#include<iostream> 
using namespace std; 
 class A {  
 public: 
    A(int ii=0) : i(ii) {
cout << " AAAAAAAAAAAAAAAAA i = " << i << endl;
	} 
    void show() { cout << "i = " << i << endl;} 
 private: 
    int i; 
}; 
 class B { 
 public: 
    B(int xx) : x(xx) {} 
    operator A() const { return A(x); } 
 private: 
    int x; 
}; 
 void g(A a) 
{
cout <<"am in g" <<endl;  
a.show(); } 
 
int main() { 
  B b(10); 
  g(b); 
  g(20); 
  getchar(); 
  return 0; 
}  

