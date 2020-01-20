#include <iostream>
#include <thread>
#include <list>
#include <mutex>
#include <condition_variable>

using namespace std;
mutex mu;
bool ready=false;
condition_variable cv;
// a global variable
list<int>myList;

void addToList(int max, int interval)
{
unique_lock<mutex>ulck(mu);
	cout <<"test "<<this_thread::get_id() <<endl;
	for (int i = interval ; i < max ; i++) {
		myList.push_back(i);
	}
	ready = true;
	ulck.unlock();
    	cv.notify_all();
}

void printList()
{
unique_lock<mutex>ulck(mu);
cv.wait(ulck);
cout <<"in loo 111" <<endl;
cout <<"test 111"<<this_thread::get_id() <<endl;
	for (auto itr = myList.begin(), end_itr = myList.end(); itr != end_itr; ++itr ) {
cout <<"in loo222" <<endl;
		cout << *itr << ",";
	}
ulck.unlock();
}

int main()
{
	int max = 5;

	std::thread t1(addToList, 5, 1);
	this_thread::sleep_for(chrono::seconds(1));
	std::thread t2(addToList, 15, 10);
cout <<"after 222222" <<endl;
	std::thread t3(printList);
//cout <<"after 333" <<endl;
	if(t1.joinable())
	t1.join();
	if(t2.joinable())
	t2.join();
	if(t3.joinable())
	t3.join();
	return 0;
}
