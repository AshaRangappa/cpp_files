#include<iostream>
#include<thread>

using namespace std;

class singleton{
private:
	int data;
	static singleton *instance;
	singleton(){
	data=0;
	}
public:
	static singleton *getinstance(){
		if(instance==NULL){
			instance=new singleton;
		}
	cout <<this_thread::get_id() <<endl;
	return instance;	
	}
	void getdata(){
		cout <<data <<endl;
	}
	void setdata(int val){
		data=val;
	}
	void setdata1(int val1){
                data=val1;
        }
	
};
singleton *singleton::instance=NULL;

int main(){
//singleton *s=s->getinstance();
//singleton *b=b->getinstance();
thread s(&singleton::getinstance);
thread b(&singleton::getinstance);
//singleton *s=s->getinstance();
/*s.getdata();
s.setdata(100);
s.getdata();
//singleton *b=b->getinstance();
b.getdata();
b.setdata1(200);
s.getdata();
b.getdata();*/
//cout <<"addr s" <<s <<" " <<b <<endl;
s.join();
b.join();
}
