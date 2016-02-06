/*
 * SupermarketProduct.h
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#ifndef PP_CPP_278_SUPERMARKETPRODUCT_H_
#define PP_CPP_278_SUPERMARKETPRODUCT_H_

#include "Item.h"

class SupermarketProduct : public Item{
public:
	SupermarketProduct(string name, double price, int amount);
	~SupermarketProduct();
	double pvp() const;
	string getInfo() const;
private:
	int amount;
};

#endif /* PP_CPP_278_SUPERMARKETPRODUCT_H_ */
