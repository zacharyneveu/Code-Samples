//Zachary Neveu (001701385)
//neveu.z@husky.neu.edu
//Embedded Design
//Fall 2016
//Mohammed K. Tavana
#include<iostream>
using namespace std;
#include"pets.h"

int pets::getAge(){
	return age;
}

string pets::getOwner() {
	return owner;
}

void pets::setValues(string pet_owner, int pet_age) {
	owner=pet_owner;
	age=pet_age;
}

int dogs::getFoodAmount() {
	return FoodAmount;
}

void dogs::setFoodAmount(int dog_food_amount) {
	FoodAmount=dog_food_amount;
}

void dogs::printValues() {
	cout<<"Species: Dog "<<"Owner:"<<getOwner()<<" age:"<<getAge()<<" food amount:"<<getFoodAmount()<<endl<<endl;
}

void cats::setFat(bool fat) {
	isFat = fat;
}

bool cats::getFat() {
	return isFat;
}

void cats::printValues() {
	cout<<"Species: Cat "<<"Owner:"<<getOwner()<<" age:"<<getAge()<<" IsFat:"<<getFat()<<endl<<endl;
}

void birds::setFly(bool fly) {
	canFly = fly;
}

bool birds::getCanFly() {
	return canFly;
}


void birds::printValues() {
	cout<<"Species: Bird "<<"Owner:"<<getOwner()<<" age:"<<getAge()<<" Can Fly:"<<getCanFly()<<endl<<endl;
}

void fish::setSwimSpeed(double speed) {
	swimSpeed=speed;
}

double fish::getSwimSpeed() {
	return swimSpeed;
}

void fish::printValues() {
	cout<<"Species: Fish "<<"Owner:"<<getOwner()<<" age:"<<getAge()<<" Swim Speed:"<<getSwimSpeed()<<endl<<endl;
}



