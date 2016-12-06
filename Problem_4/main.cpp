

//Zachary Neveu (001701385)
//neveu.z@husky.neu.edu
//Embedded Design
//Fall 2016
//Mohammed K. Tavana
#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h> //included for atoi().
using namespace std;
#include"carlist.h"

int main() {
	list newList; //declare main list for program
	const char* const DELIMITER=",";  /* Delimiter character */
	const int MAX_CHARS_PER_LINE = 512; /* anything larger than possible */
	const int MAX_TOKENS_PER_LINE = 6; /* just has to be larger than three */

	/* Code to read file here */
	ifstream fin;
	fin.open("cars.txt");

	/* make sure file exists and opens */
	if(!fin.good()) {
		cout<<"failed..."<<endl;
	}

	/* While loop iterates as long as file has not ended */
	while(!fin.eof()) {
		char buf[MAX_CHARS_PER_LINE];
		fin.getline(buf, MAX_CHARS_PER_LINE); //read line of file to new line character into MAX_CHARS_PER_LINE.
		const char* token[MAX_TOKENS_PER_LINE] = {}; //initialize tokens.
		token[0] = strtok(buf, DELIMITER); //set first token to first string up to delimiter of buf.

		/* If statement and for loop iterate for all tokens in buffered line */
		if(token[0]) {
			for (int n=1; n<MAX_TOKENS_PER_LINE; n++) {
				token[n] = strtok(0, DELIMITER);
				/* if blank token is hit break loop. */
				if(!token[n]) {
					break;
				}
			}
		}

		/* If statement stops loop if first token is null (blank line) */
		if(token[0]==0) {
			break;
		}

		/* Tokens are of type const char* so they must
		 * be initialized as strings before they can be used */
		string make = token[0];
		string model = token[1];
		int year = atoi(token[2]);
		string color = token[3];

		/* add car with current data to the list */
		newList.insert(make, model, year, color);
		}

	newList.sort(1); //mode 1 is sort by year ascending
	cout<<"Ascending list by year: "<<endl;
	newList.display();

	newList.sort(2); //mode 2 is sort by year descending
	cout<<"Descending List by year: "<<endl;
	newList.display();

	newList.sort(3); //mode 3 is sort by model ascending
	cout<<"Ascending by model: "<<endl;
	newList.display();

	newList.sort(4); //mode 4 is sort by model descending
	cout<<"Descending by model: "<<endl;
	newList.display();
return 0;
}



