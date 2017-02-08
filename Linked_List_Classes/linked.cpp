#include<iostream>
using namespace std;
#include"linked.h"

void node::setData(int value){
	data=value;
}

void node::setNext(node* nextLocation){
	next=nextLocation;
}

void node::printData(){
	cout<<data<<"--> ";
}

int node::returnData(){
	return data;
}

node* node::returnNext(){
	return next;
}

void list::set_head(node* head_node) {
	head = head_node;
}

void list::display(){
	node* curr_node=head;
	cout<<"\n\n"<<endl;
	while(curr_node!=NULL){
		curr_node->printData();
		node* nextNode=curr_node->returnNext();
		curr_node=nextNode;
	}
	cout<<endl;
}

node* list::insert_at_head(){
	int inputValue;
	cout<<"Enter Data:"<<endl;
	cin>>inputValue;
	node* new_node;
	new_node=new node;
	new_node->setData(inputValue);
	if(head==NULL){
		head=new_node;
		new_node->setNext(NULL);
	}
	else{
		new_node->setNext(head);
		head=new_node;
	}
	return head;
}

node* list::insert_at_tail(){
	int inputValue;
	cout<<"Enter Data:"<<endl;
	cin>>inputValue;
	node* curr_node=head;
	node* new_node;
	new_node=new node;
	new_node->setData(inputValue);
	if(head==NULL){
		head=new_node;
		new_node->setNext(NULL);
	}
	else{
		while(curr_node->returnNext()!=NULL){
			curr_node=curr_node->returnNext();
		}
		curr_node->setNext(new_node);
		new_node->setNext(NULL);
	}
	return head;
}

node* list::delete_at_head(){
	if(head==NULL){
		return head;
		cout<<"list was empty to start."<<endl;
	}
	else{
		node* curr_node=head;
		node* nextNode=curr_node->returnNext();
		delete(curr_node);
		head=nextNode;
	}
	return head;
}

node* list::delete_at_tail(){
	node* curr_node=head;
	node* nextNode=curr_node->returnNext();
	if(head==NULL){
		return head;
	}
	else if(nextNode==NULL){
		delete(nextNode);
		return NULL;
	}
	else{
		while(nextNode->returnNext()!=NULL){
			curr_node=nextNode;
			nextNode=nextNode->returnNext();
		}
		delete(nextNode);
		curr_node->setNext(NULL);
		return head;
	}
}

void list::find_element(){
	cout<<"\nfind which value? ";
	int val;
	cin>>val;
	node* curr_node=head;
	int node_num=1;
	int sum=1;
	if(curr_node==NULL){
		cout<<"Sorry, the list is empty."<<endl;
	}
	while(curr_node!=NULL){
		if(curr_node->returnData()==val){
			cout<<"That value was found in node "<<node_num<<endl;
			sum+=1;
		}
		node_num+=1;
		curr_node=curr_node->returnNext();
	}
	if(curr_node==NULL&&sum==1){
		cout<<"That value was not found in the list."<<endl;
	}
}

void list::count_element(){
	node* curr_node=head;
	int sum=0;
	while(curr_node!=NULL){
		sum+=1;
		curr_node=curr_node->returnNext();
	}
	cout<<"The total number of elements in the list is: "<<sum<<endl;
}

list::~list(){
	node* curr_node=head;
	node* next_node;
	while(curr_node!=NULL){
			next_node=(curr_node->returnNext());
			delete(curr_node);
			curr_node=next_node;
	}
	cout<<"List Destroyed!"<<endl;
}

