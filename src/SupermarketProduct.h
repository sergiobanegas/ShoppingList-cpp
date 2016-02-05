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
	double pvp();
	string getInfo();
	virtual ~SupermarketProduct();
private:
	int amount;
};

#endif /* PP_CPP_278_SUPERMARKETPRODUCT_H_ */
