#include<iostream>
#include<memory>
using namespace std;
class Base{
public:
	int cnt;
	Base(){
	cout <<"am in base constructor" <<endl;
	}
	void dis(int i){
	cnt=i;
	cout <<"not sure wat to dis cnt" <<cnt <<endl;
	}
	~Base(){
	cout <<"am in destrutor" <<endl;
	}
};

int main(){
unique_ptr<Base> p1 (new Base);
int *np;
//unique_ptr<Base> p3 (new Base);
cout << p1.get() <<endl;
p1->dis(10);
//unique_ptr<Base> p2=move(p1);
np=p1.get();
p1->dis(20);
//cout << p2.get() <<endl;
cout <<p1->cnt <<np->cnt <<endl;
}
