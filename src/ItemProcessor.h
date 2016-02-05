/*
 * ItemProcessor.h
 *
 *  Created on: Dec 19, 2015
 *      Author: sergio
 */

#ifndef PP_CPP_278_ITEMPROCESSOR_H_
#define PP_CPP_278_ITEMPROCESSOR_H_

#include "Item.h"
#include "Book.h"
#include "SupermarketProduct.h"
#include "Toy.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string.h>
using namespace std;

class ItemProcessor {
public:
	ItemProcessor();
	const bool load(const char* file);
	const double pvp();
	string generateTicket();
	virtual ~ItemProcessor();
private:
	Item** items;
	int numberOfItems;
};
#endif /* PP_CPP_278_ITEMPROCESSOR_H_ */
