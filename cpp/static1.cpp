#include<iostream>
using namespace std;

int fun(){
static int i=0;
cout <<"value " <<i++ <<endl;
}

int main(){
fun();
fun();
}
