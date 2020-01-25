#include<iostream>
using namespace std;

void fun(int& val){
	cout <<"LVALUE" <<endl;
}
void fun(const int& val){
	cout <<"Const LVALUE" <<endl;
}
//void fun(int&& val){
//	cout <<"RVALUE" <<endl;
//}

int main(){
int i = 5;
fun(i);
fun(5);
}
