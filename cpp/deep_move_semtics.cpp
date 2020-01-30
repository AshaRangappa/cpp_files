#include<iostream>
#include<vector>
using namespace std;
class A{
private:int *ptr;
public:
	A(){
		ptr = new int;
		cout <<"constructor" <<endl;
	}
	A(const A &a){
		ptr = new int;
		cout <<"copy constructor" <<endl;
	}
	A(A && m_a){
		ptr=m_a.ptr;
		cout <<"move constructor" <<endl;
		m_a.ptr=nullptr;
	}
	A& operator=(const A &a){
		cout <<"assign constructor" <<endl;
	}
	~A(){
		delete[] ptr;
		cout <<"dest" <<endl;
	}

};

int main(){
A a;
A a2=a;

/* o/p
constructor
copy constructor
dest
dest
*/

A a;
vector<A> v;
v.push_back(move(a));
/* o/p
constructor
move constructor
dest
dest
*/

vector<A> v;
v.push_back(A());
/* o/p
constructor
move constructor
dest
dest
*/
}
