#include<iostream>
#include<thread>
#include<mutex>
#include<exception>
using namespace std;

std::mutex mu;
int i=0;

class A{
public:
void operator()(int y){
mu.lock();
cout << "asha " <<y << " " <<this_thread::get_id() <<endl;
mu.unlock();
}
};

int main(){
A a;
thread t1[5];
try{
for(i=0;i<5;i++){
	t1[i]=std::thread(A(),i);
	cout << "forrrrr" << t1[i].get_id() << endl;
//t1[i].join();
}
for(i=0;i<5;i++){
	t1[i].join();
}
}
catch(const std::exception& e){
cout << "wat exec" <<e.what() <<endl;
}
}
