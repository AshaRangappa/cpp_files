#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
mutex mu;
class Base{
public:
	static int cnt;
	int a;
	void operator()(int y){
		a=y;
		for(a=0;a<10;a++){
		mu.lock();
		cout <<"oper " <<cnt++ <<" " <<this_thread::get_id() <<endl;
		mu.unlock();
		}
	}
};
int Base::cnt=0;
int main(){
	int i=0;
	thread t1=std::thread(Base(),i);
	mu.lock();
	cout <<"in main after t1" <<endl;
	mu.unlock();
	thread t2=std::thread(Base(),i);
	mu.lock();
	cout <<"in main after t3" <<endl;
	mu.unlock();
t1.join();
t2.join();
}
