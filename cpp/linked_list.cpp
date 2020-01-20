#include<iostream>

using namespace std;

struct node{
int data;
struct node* next;
};

struct node *head,*temp,*local;
struct node *next1,*curr,*prev1;
int insert(){
	for(auto i=0;i<5;i++){
	temp=new node;
	temp->data=i;
	temp->next=NULL;
	if(head==NULL)
		{
		head=temp;
		local=temp;
		}
	else{
		local->next=temp;
		local=local->next;
		}
	}
}

int print(){
temp=head;
cout <<"printing" <<endl;
while(temp->next!=NULL){
	cout<<temp->data <<endl;
	temp=temp->next;
}
}
int del_head(){
temp=head->next;
delete head;
head=temp;
while(temp->next!=NULL){
        cout<<temp->data <<endl;
        temp=temp->next;
}
}

int del_last(){
temp=head;
delete head;
while(temp->next->next!=NULL){
        cout<<temp->data <<endl;
        temp=temp->next;
}
delete(temp->next);
temp->next=NULL;
print();
}

int reverse(){
curr=head;
next1=NULL;
prev1=NULL;
while(curr != NULL){
	next1=curr->next;
	curr->next=prev1;
	prev1=curr;
	curr=next1;
}
head=prev1;
cout <<"rever" <<endl;
print();
}

void add_node(){
temp=head;
while(temp!=NULL){
	if(temp->data==2){
	cout <<"inside" <<temp->data <<endl;
		curr=new node;
		curr->data=5;
		curr->next=temp->next;
		temp->next=curr;
		
	}
		temp=temp->next;
}
}

int main(){
head=NULL;
insert();
print();
//del_head();
//print();
//del_last();
//reverse();
add_node();
print();
}
