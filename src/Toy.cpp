/*
 * Toy.cpp
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#include "Toy.h"

Toy::Toy(string name, double price, string brand, int amount):Item(name, price) {
	this->brand=brand;
	this->amount=amount;
}

Toy::~Toy() {}

double Toy::pvp() const{
	return this->amount*(this->getPrice()+(this->getPrice()*0.21));
}

string Toy::getInfo() const{
	stringstream ss;
	ss << this->amount <<" "<< this->getName() << " " << roundf((this->pvp()/this->amount)*100)/100;
	return ss.str();
}
