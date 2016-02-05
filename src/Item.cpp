/*
 * Item.cpp
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#include "Item.h"

Item::Item(string name, double price) {
	this->name = name;
	this->price = price;
}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

double Item::pvp() {
	return 0;
}

string Item::getName() {
	return this->name;
}

double Item::getPrice() {
	return this->price;
}
