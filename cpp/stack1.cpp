#include<iostream>
#include<stack>
using namespace std;

void showstack(stack<int>& s){
cout <<"stack is";
	while(!s.empty()){
	cout <<"\t" <<s.top();
	s.pop();
	}
}

int main(){
stack<int> s;
s.push(10);
s.push(30);
s.push(20);
s.push(50);
s.push(1);

showstack(s);
cout <<"after fun" <<endl;
cout <<"\n size is" <<s.size();
cout <<"s.top() : " <<s.top();
s.pop();
cout <<"\n size is" <<s.size();
showstack(s);
}
