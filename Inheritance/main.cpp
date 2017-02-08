//Zachary Neveu (001701385)
//neveu.z@husky.neu.edu
//Embedded Design
//Fall 2016
//Mohammed K. Tavana
#include<iostream>
using namespace std;
#include"pets.h"

int main() {
fish danny;
dogs sally;
birds johnny;
penguin tucker;
dogs bob;
cats tippy;
birds polly;
penguin bobby;
cats elvis;
cats fergie;

danny.setValues("Jon Appleseed", 110); //He might be a turtle if he's this old...
danny.setSwimSpeed(9);

sally.setValues("Jane Doe", 10);
sally.setFoodAmount(5);

johnny.setValues("Walter White", 2);
johnny.setFly(1);

tucker.setValues("Darth Vader", 7);
tucker.setSwimSpeed(3.254);
tucker.setFly(0);

bob.setValues("Harry Potter", 3);
bob.setFoodAmount(2);

tippy.setValues("Frodo Baggins", 4);
tippy.setFat(0);

polly.setValues("Sam Gange", 12);
polly.setFly(1);

bobby.setValues("Percy Jackson", 5);
bobby.setFly(0);
bobby.setSwimSpeed(4.45);

elvis.setValues("Dr. Strange", 9);
elvis.setFat(0);

fergie.setValues("tan", 8);
fergie.setFat(1);


/* Return all values in this section */
cout<<"Danny--"<<endl;
danny.printValues();

cout<<"Sally-- "<<endl;
sally.printValues();

cout<<"Johnny--"<<endl;
johnny.printValues();

cout<<"Tucker--"<<endl;
tucker.fish::printValues();

cout<<"Bob--"<<endl;
bob.printValues();

cout<<"Tippy--"<<endl;
tippy.printValues();

cout<<"Polly--"<<endl;
polly.printValues();

cout<<"Bobby--"<<endl;
bobby.fish::printValues();

cout<<"Elvis--"<<endl;
elvis.printValues();

cout<<"Fergie-- "<<endl;
fergie.printValues();
} //end of main function

