#include<iostream>
/* this code was written to test const function
1.const objects can acces only const member functions.
2.non constant objects can acces both const and non const meber function.
3.const functions cannot change value so only const is used.but if a varible is created inside it works.
4.const functions are there only in c++ and only for member functions.
5. if normal function is a const fun then const should be mentioned in both prototye and definition.
/*
using namespace std;
class Base{
public:
	int val;
	Base():val(2){
	}
	int fun(int num){
		num=val;
		return val;
	}
};

int main(){
const Base obj;
cout <<obj.fun(5) <<endl;
}
