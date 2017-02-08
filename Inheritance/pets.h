#ifndef PETS_H
#define PETS_H
class pets{
protected:
	/* All kinds of pets have a name and an age */
	string owner;
	int age;
public:
	pets(){age=0;};
	~pets(){};
	virtual string getOwner();
	virtual int getAge();
	virtual void setValues(string pet_owner, int pet_age);
};

class dogs: public pets{
private:
	int FoodAmount;
public:
	dogs(){FoodAmount=0;};
	~dogs(){};
	int getFoodAmount();
	void setFoodAmount(int dog_food_amount);
	void printValues();
};

class cats: public pets{
private:
	bool isFat;
public:
	cats(){isFat=0;};
	~cats(){};
	void setFat(bool fat);
	bool getFat();
	void printValues();
};

/* Note: virtual inheritance used for birds and fish 
 * so that penguin class will not inherit setValues()
 * function from both classes. */
class birds: public virtual pets{
private:
	bool canFly;
public:
	birds(){canFly=1;};
	~birds(){};
	virtual void setFly(bool fly);
	virtual bool getCanFly();
	virtual void printValues();
};

class fish: public virtual pets{
private:
	double swimSpeed;
public:
	fish(){swimSpeed=0;};
	~fish(){};
	virtual void setSwimSpeed(double speed);
	virtual double getSwimSpeed();
	virtual void printValues();
};

/* Demonstrates double inheritance */
class penguin: public birds, public fish{
private:
public:
};

#endif
