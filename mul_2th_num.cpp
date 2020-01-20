#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<vector>

using namespace std;
mutex mu;
condition_variable cv;
vector<int> v;
int cnt=0;
int num=0;
int even(){
	for(;cnt <=10;){
	unique_lock<mutex> ul(mu);
	cv.wait(ul,[](){ return (cnt%2 == 0); });
//	cv.wait(ul);
//	if( cnt%2 == 0 && cnt < 10)
	v.push_back(cnt);
	cout <<"even" <<cnt++ <<endl;
	ul.unlock();
	cv.notify_all();
	}
}

int odd(){
	for(;cnt <=10;){
	unique_lock<mutex> ul(mu);
	cv.wait(ul,[](){ return (cnt%2 == 1); });
	//cv.wait(ul);
	//if( cnt%2 != 0 && cnt < 10)
	v.push_back(cnt);
	cout <<"odd" <<cnt++ <<endl;
	ul.unlock();
	cv.notify_all();
	}
}

int print(){
cout <<"v.size" <<v.size() <<endl;
unique_lock<mutex> ul(mu);
        cv.wait(ul,[](){ return (v.size() >= 10); });
//if(v.size() == 10){
        for(auto it=v.begin();it!=v.end();it++){
        cout <<*it <<endl;
        }
ul.unlock();
        cv.notify_all();
}

int main(){
thread t1(even);
thread t2(odd);
this_thread::sleep_for(chrono::seconds(2));
thread t3(print);
cout <<"main thread" <<endl;
t1.join();
t2.join();
t3.join();
}
