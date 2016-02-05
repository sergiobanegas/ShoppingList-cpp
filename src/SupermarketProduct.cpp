/*
 * SupermarketProduct.cpp
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#include "SupermarketProduct.h"

using namespace std;

SupermarketProduct::SupermarketProduct(string name, double price, int amount):Item(name, price) {
	this->amount=amount;
}

SupermarketProduct::~SupermarketProduct() {
	// TODO Auto-generated destructor stub
}

double SupermarketProduct::pvp(){
	return this->amount*(this->getPrice()+(this->getPrice()*0.08));
}

string SupermarketProduct::getInfo(){
	stringstream ss;
	ss << this->amount << " " << this->getName() << " " << roundf((this->pvp()/this->amount)*100)/100;
	return ss.str();
}
