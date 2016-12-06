//Zachary Neveu (001701385)
//neveu.z@husky.neu.edu
//Embedded Design
//Fall 2016
//Mohammed K. Tavana
//main.cpp
#include<iostream>
using namespace std;
#include"templatePractice.h"

template <class T>
T maximum(T a, T b, T c) {
	T max = a;
	if(b>max) max = b;
	if(c>max) max = c;
	return max;
}

template <class V>
V sum(V a, V b, V c) {
	V sum = a + b + c;
	return sum;
}

int main() {
	bigPurchase AmazonOrder;
	AmazonOrder.setValues(110, 220, 330);

/*  Print results of max function for big purchase  */
	cout<<"Max value of amazon item is:"<<maximum(AmazonOrder.getValue(1), AmazonOrder.getValue(2), AmazonOrder.getValue(3))<<endl;

	/* Print results of sum function for big purchase */
	cout<<"Sum of Amazon order is:"<<sum(AmazonOrder.getValue(1), AmazonOrder.getValue(2), AmazonOrder.getValue(3))<<endl;

	smallPurchase IceCream;
	IceCream.setValues(2.30, 3.46, 5.20);

	/* Print results of max function for small purchase */
	cout<<"Max price of ice cream is:"<<maximum(IceCream.getValue(1), IceCream.getValue(2), IceCream.getValue(3))<<endl;

	/* Print results of sum function for small purchase */
	cout<<"Sum of ice cream order is:"<<sum(IceCream.getValue(1), IceCream.getValue(2), IceCream.getValue(3))<<endl;

	purchaseItems toiletries;
	toiletries.setValues("toothpaste", "toothbrush", "floss");

	/* Print results of max function for item names */
	cout<<"Furthest along name in the alphabet is:"<<maximum(toiletries.getValue(1), toiletries.getValue(2), toiletries.getValue(3))<<endl;

	/* Print results of sum function for item names*/
	cout<<"sum of the names of toiletries is:"<<sum(toiletries.getValue(1), toiletries.getValue(2), toiletries.getValue(3))<<endl;

	return 0;
}

