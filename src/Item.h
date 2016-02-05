/*
 * Item.h
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#ifndef PP_CPP_278_ITEM_H_
#define PP_CPP_278_ITEM_H_

#include <string>
#include <math.h>
#include <iostream>
#include <sstream>
using namespace std;

class Item {
public:
	Item(string name, double price);
	virtual ~Item();
	virtual double pvp()=0;
	virtual string getInfo()=0;
protected:
	string getName();
	double getPrice();
private:
	string name;
	double price;
};

#endif /* PP_CPP_278_ITEM_H_ */
