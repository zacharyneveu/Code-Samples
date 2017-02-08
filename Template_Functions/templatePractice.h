#ifndef TEMPLATEPRACTICE_H
#define TEMPLATEPRACTICE_H
class purchaseItems{
private:
	string item_one;
	string item_two;
	string item_three;
public:
	void setValues(string value1, string value2, string value3);
	string getValue(int item);
};

class bigPurchase{
private:
	int price_one;
	int price_two;
	int price_three;
public:
	void setValues(int value1, int value2, int value3);
	int getValue(int item);
};

class smallPurchase{
private:
	double price_one;
	double price_two;
	double price_three;
public:
	void setValues(double value1, double value2, double value3);
	double getValue(int item);
};


#endif
