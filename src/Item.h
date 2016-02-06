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
	virtual double pvp() const = 0;
	virtual string getInfo() const = 0;
protected:
	string getName() const;
	double getPrice() const;
private:
	string name;
	double price;
};

#endif /* PP_CPP_278_ITEM_H_ */
