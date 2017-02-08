#include<iostream>
using namespace std;
#include"linked.h"
void operation_select(); //declared here because operates on main function, not list class or node class.

int main(){
	list mainList;
	int operation;
	do{
		operation_select();
		cin>>operation;

		switch(operation){
			case 1: mainList.display();
				break;
			case 2:
				mainList.set_head(mainList.insert_at_head());
				break;
			case 3:
                mainList.set_head(mainList.insert_at_tail());
                break;
			case 4: mainList.set_head(mainList.delete_at_head());
                break;
          	case 5: mainList.set_head(mainList.delete_at_tail());
				break;
          	/*Omitted because this was optional function and does not work exactly as intended.
			 * case 6: cout<<"\nwith which value? ";
				cin>>value;
                head = delete_with_val(head, value);
                break;*/
          	case 6:
                mainList.find_element();
                break;
          	case 7: mainList.count_element();
                break;
			//case 8: mainList.destroy_list();
			//	break;
          	case 9:
                break;
		}
	}
	while(operation!=9);
	return(0);
}

void operation_select(){
	cout<<"\n\n***************************************"<<endl;
	cout<<"select your operation"<<endl;
	cout<<"1- Display linked list"<<endl;
	cout<<"2- Insert at head"<<endl;
	cout<<"3- insert at tail"<<endl;
	cout<<"4- Delete at head"<<endl;
	cout<<"5- Delete at tail"<<endl;
	cout<<"6- Find Element"<<endl;
	cout<<"7- Count Element"<<endl;
	cout<<"9- Exit"<<endl;
	cout<<"Which Operation? "<<endl;

}

