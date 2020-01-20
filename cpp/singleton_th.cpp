#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

using namespace std;
mutex mu;
condition_variable cv;

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
	unique_lock<mutex> gulck(mu);
		cout <<data <<endl;
	cv.notify_one();
	gulck.unlock();
	}
	void setdata(int val){
	unique_lock<mutex> ulck(mu);
		data=val;
	ulck.unlock();
	}
	void setdata1(int val1){
                data=val1;
        }
	
};
singleton *singleton::instance=NULL;

void func(){
unique_lock<mutex> gulck(mu);
//cv.wait(gulck);
cout <<"out side" <<endl;
gulck.unlock();
}

int main(){
singleton *s=s->getinstance();
singleton *b=b->getinstance();
thread s1(&singleton::setdata,s,100);
thread s2(&singleton::getdata,s);
//thread b2(&singleton::setdata,b,200);
thread f(func);
/*s.getdata();
s.setdata(100);
s.getdata();
singleton *b=b->getinstance();
b.getdata();
b.setdata1(200);*/
cout <<"addr s" <<s <<" " <<b <<endl;
s1.join();
s2.join();
//b2.join();
f.join();
}
