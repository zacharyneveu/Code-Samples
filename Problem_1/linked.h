#ifndef LINKED_H
#define LINKED_H

class node{
private:
	int data;
	node *next;
public:
	node(){data=0;}; //constructor
	~node(){}; //destructor
	void setData(int value);
	void setNext(node* nextlocation);
	void printData();
	int returnData();
	node* returnNext();
};

class list{
private:
	node* head;
public:
	list(){head=NULL; cout<<"List Created!"<<endl;};
	~list();
	void display();
	node* insert_at_head();
	node* insert_at_tail();
	node* delete_at_head();
	node* delete_at_tail();
	//void delete_with_value();
		//This function omitted because it was optional originally
	void find_element();
	void count_element();
	void destroy_list();
	void set_head(node* head_node);
};



#endif
