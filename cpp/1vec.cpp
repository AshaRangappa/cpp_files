#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
class Base{
	int data;
public:
	void show (int d){
	data=d;
	cout <<data <<endl;
	}
};
int main(){
int i;
vector<Base> v;
Base b;
cout <<v.size() <<endl;
for(i=0;i<5;i++){
	b.show(i);
	v.push_back(b);
}
cout << "Output of begin and end: " <<v[3] <<endl; 
//vector<Base>::iterator it;
/*for (it = listofsites.begin(); it != listofsites.end(); ++it) {
        cout << it->i;
    }*/
 //   for (it = v.begin(); it != v.end(); ++it) 
  //      cout << it->show() << " ";
}
