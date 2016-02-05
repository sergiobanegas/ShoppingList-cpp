/*
 * Toy.h
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#ifndef PP_CPP_278_TOY_H_
#define PP_CPP_278_TOY_H_

#include "Item.h"

class Toy : public Item{
public:
	Toy(string name, double price, string brand, int amount);
	double pvp();
	string getInfo();
	virtual ~Toy();
private:
	string brand;
	int amount;
};

#endif /* PP_CPP_278_TOY_H_ */
