#include<iostream>
#include<queue>

using namespace std;

void shwq(queue<int> q){
	while(!q.empty()){
	cout <<q.front() <<endl;
	q.pop();
	}
}

int main(){
queue<int> q;

q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

shwq(q);
cout <<"size::" <<q.size() <<endl;
cout <<"back::" <<q.back() <<endl;
cout <<"front::" <<q.front() <<endl;
q.pop();
shwq(q);

}
