#include <iostream>
#include <stdio.h>
using namespace std;
class Base{
public:
Base(){
cout << "Base" <<endl;
}
};
class D1:public Base{
public:
D1(){
cout << "D1" <<endl;
}
};
class D2:public D1{
public:
D2(){
cout << "D2" <<endl;
}
};

class D12:public D2{
public:
D12(){
cout << "D12" <<endl;
}
};
int main(){
D12 d;
}
