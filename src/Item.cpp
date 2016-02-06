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

Item::~Item() {}

string Item::getName() const {
	return this->name;
}

double Item::getPrice() const {
	return this->price;
}
