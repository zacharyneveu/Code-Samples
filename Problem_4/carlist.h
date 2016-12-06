#ifndef CARLIST_H
#define CARLIST_H
class car{
private:
	string make; //Car Maker e.g Ford, Buick, etc.
	string model; // Car Model
	int year; //Year of production
	string color; //Exterior color
	car* next; //Pointer to next car in list
public:
	car(){year = 0;}; //Simple constructor
	~car(){}; //unused destructor - cars freed when list destructor is used
	void printData(); //print all data in the correct form to the terminal

	/* getData used to check if two cars are the same */
	string getData(); //return all data as a concatenated string
	void setData(string carMake, string carModel, int carYear, string carColor); //Sets all data for the car in one function (except next pointer)
	string getMake(); //returns make of car
	string getModel(); //returns model of car
	int getYear(); //returns year of production
	string getColor(); //returns exterior color
	car* getNext();  //returns next pointer of car
	void setNext(car* next_car); //sets next pointer of car
};


class list{
private:
	car* head; //pointer to first ca of list
	int size; //stores number of cars in the list
public:
	list(){head = NULL;}; //simple constructor
	~list(); //destructor detailed in carlist.cpp - destroys all cars in list
	car* insert(string make, string model, int year, string color); //inserts car at head of list
	void display(); //displays list of cars
	void sort(int mode); //Prototype function for one sort function for all modes
	void swap(car* car1, car* car2); //Swaps position of two cars in list- used by sort functions
};
#endif
