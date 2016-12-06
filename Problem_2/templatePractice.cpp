//Zachary Neveu (001701385)
//neveu.z@husky.neu.edu
//Embedded Design
//Fall 2016
//Mohammed K. Tavana
//templatePractice.cpp

#include<iostream>
using namespace std;
#include"templatePractice.h"

void bigPurchase::setValues(int value1, int value2, int value3) {
	price_one=value1;
	price_two=value2;
	price_three=value3;
}


int bigPurchase::getValue(int item) {
	if(item==1) {
		return price_one;
	}
	else if(item==2) {
		return price_two;
	}
	else if(item==3) {
		return price_three;
	}
	else
		return 0;
}

void smallPurchase::setValues(double value1, double value2, double value3) {
	price_one=value1;
	price_two=value2;
	price_three=value3;
}

double smallPurchase::getValue(int item) {
	if(item==1) {
		return price_one;
	}
	else if(item==2) {
		return price_two;
	}
	else if(item==3) {
		return price_three;
	}
	else
		return 0;
}

void purchaseItems::setValues(string value1, string value2, string value3) {
	item_one=value1;
	item_two=value2;
	item_three=value3;
}


string purchaseItems::getValue(int item) {
	if(item==1) {
		return item_one;
	}
	else if(item==2) {
		return item_two;
	}
	else if(item==3) {
		return item_three;
	}
	else
		return 0;
}

