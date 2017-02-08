

//Zachary Neveu (001701385)
//neveu.z@husky.neu.edu
//Embedded Design
//Fall 2016
//Mohammed K. Tavana
#include<iostream>
using namespace std;
#include"carlist.h"
#include<stdio.h>
#include<cstring>
#include<fstream>

void car::printData() {
	cout<<make<<", "<<model<<", "<<year<<", "<<color<<endl;
}

void car::setData(string carMake, string carModel, int carYear, string carColor) {
	make = carMake;
	model = carModel;
	year = carYear;
	color = carColor;
}

/* Sort function works with four modes.
 * mode=1 sorts ascending by year.
 * mode=2 sorts descending by year.
 * mode=3 sorts ascending my model
 * mode=4 sorts descending by model
 */
void list::sort(int mode) {
	int swapped; //set to one if pair of elements is swapped.
	car* curr_car=head; //curr car tells us where we are in the list
	if(curr_car==NULL) { //don't sort empty list...
		cout<<"empty list..."<<endl;
	}

	do {
		swapped= 0;
		curr_car = head;
		while(curr_car->getNext()!=NULL) { //iterate to end of list
			switch(mode) { //based on mode, modify what is being compared
				case 1: //ascending by year
					if(curr_car->getYear() > (curr_car->getNext())->getYear()) {
						swap(curr_car, curr_car->getNext());
						swapped = 1;
					}
					break;
				case 2: //descending by year
					if(curr_car->getYear() < (curr_car->getNext())->getYear()) {
						swap(curr_car, curr_car->getNext());
						swapped = 1;
					}
					break;
				case 3: //ascending by model
					if(curr_car->getModel() > (curr_car->getNext())->getModel()) {
						swap(curr_car, curr_car->getNext());
						swapped = 1;
					}
					break;
				case 4: //descending by model
					if(curr_car->getModel() < (curr_car->getNext())->getModel()) {
						swap(curr_car, curr_car->getNext());
						swapped = 1;
					}
					break;
			}

			/* If two identical entries are found, delete one and restart search */
			if(curr_car->getData() == (curr_car->getNext())->getData()) {
				cout<<"Duplicate found: "<<endl;
				curr_car->printData();
				cout<<endl;
				curr_car->setNext((curr_car->getNext())->getNext());
				sort(mode); //call recursively if duplicate found
			}
		curr_car = curr_car->getNext(); //advance one car in list
		}
	curr_car = NULL; //when at end of list, set last car to null
	}
while(swapped); //stop do-while loop when no elements need to be swapped.
}

/* Swap used by sort functions to switch the data of two nodes. */
void list::swap(car* car1, car* car2) {
	string tempMake = car1->getMake();
	string tempModel = car1->getModel();
	string tempColor = car1->getColor();
	int tempYear = car1->getYear();
	car1->setData(car2->getMake(), car2->getModel(), car2->getYear(), car2->getColor());
	car2->setData(tempMake, tempModel, tempYear, tempColor);
}

void list::display(){
	car* curr_car=head;
	//cout<<"\n"<<endl;
	while(curr_car!=NULL){
		curr_car->printData();
		car* next_car=curr_car->getNext();
		curr_car=next_car;
	}
	cout<<endl;
}

/* Inserts new car with given data at head of list */
car* list::insert(string make, string model, int year, string color){
	car* new_car; //create a new car
	new_car = new(car); //allocate memory for new car
	if(head==NULL){ //empty list case
		head=new_car;
		new_car->setNext(NULL);
	}
	else{ //populated list case
		new_car->setNext(head);
		head=new_car;
	}
	new_car->setData(make, model, year, color); //initialize car with given data
	return head;
}

/* Destroy list.  Frees memory used by each car as it travels along list */
list::~list(){
	car* curr_car=head;
	car* next_car;
	while(curr_car!=NULL){
			next_car=(curr_car->getNext());
			delete(curr_car);
			curr_car=next_car;
	}
	cout<<"List Destroyed!"<<endl;
}

car* car::getNext() {
		return next;
}

void car::setNext(car* next_car) {
	next = next_car;
}

int car::getYear(){
	return year;
}

string car::getMake(){
	return make;
}

string car::getModel() {
	return model;
}

string car::getColor() {
	return color;
}

/* Simply concatenates data so that if data is the same
 * two cars are the same */
string car::getData() {
	char numstr[21];
	sprintf(numstr, "%d", year);
	string data = make + model + numstr + color;
	return data;
}
