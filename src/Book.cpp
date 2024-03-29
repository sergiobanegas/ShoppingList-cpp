/*
 * Book.cpp
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#include "Book.h"

Book::Book(string name, double price, string author):Item(name, price) {
	this->author=author;
}

Book::~Book() {}

double Book::pvp() const{
	return this->getPrice()+(this->getPrice()*0.16);
}

string Book::getInfo() const{
	stringstream ss;
	ss << this->getName() << " " << roundf(pvp()*100)/100;
	return ss.str();
}
