#include<iostream>
#include<map>
using namespace std;

int main(){
map<string,int> mapdone= {
{"START",0},
{"ABORT",0},
{"STOP",0},
};

auto it=mapdone.begin();
while(it!=mapdone.end()){
if(it->first == "ABORT")
mapdone["ABORT"]=7;
cout <<it->second <<endl;
if(it->first == "STOP")
mapdone["STOP"]=9;
it++;
}
it=mapdone.begin();
while(it!=mapdone.end()){
cout << it->first <<it->second <<endl;
it++;
//cout << it->first <<it->second <<endl;
}
}
