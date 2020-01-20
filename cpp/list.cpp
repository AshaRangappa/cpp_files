#include<iostream>
#include<list>

using namespace std;
list<int> a1;
int showlist(){
for(auto it=a1.begin();it!=a1.end();it++){
	cout <<*it <<endl;
}
cout <<"rbegin and rend" <<endl;
//a1.assign(2,8);
//auto it=a1.begin();
//a1.insert(it,2);
//a1.remove(8);
a1.unique();
cout <<a1.max_size() <<endl;
for(auto it=a1.rbegin();it!=a1.rend();it++){
        cout <<*it <<endl;
}
}
int main(){

for(auto i=0;i<5;i++){
a1.push_back(i);
a1.push_front(i);
}
//cout <<a1.back() <<endl;
a1.push_front(123);
showlist();
}
