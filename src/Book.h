/*
 * Book.h
 *
 *  Created on: Dec 27, 2015
 *      Author: sergio
 */

#ifndef PP_CPP_278_BOOK_H_
#define PP_CPP_278_BOOK_H_

#include "Item.h"

class Book : public Item{
public:
	Book(string name, double price, string author);
	double pvp();
	string getInfo();
	virtual ~Book();
private:
	string author;
};

#endif /* PP_CPP_278_BOOK_H_ */
