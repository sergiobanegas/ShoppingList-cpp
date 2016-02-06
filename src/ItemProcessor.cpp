/*
 * ItemProcessor.cpp
 *
 *  Created on: Dec 19, 2015
 *      Author: sergio
 */

#include "ItemProcessor.h"

ItemProcessor::ItemProcessor() {
	this->items=NULL;
	this->numberOfItems=0;
}

ItemProcessor::~ItemProcessor() {
	for (int i=0;i<this->numberOfItems;i++){
		delete this->items[i];
	}
	delete [] this->items;
}

bool ItemProcessor::load(const char* file) const{
	 ifstream myFile;
	 myFile.open(file, ifstream::in);
	 string line;
	 if (myFile){
		 int i=0;
		 myFile >> this->numberOfItems;
		 this->items= new Item*[this->numberOfItems];
		 while ((getline(myFile, line))&&(i<this->numberOfItems)){
			 int type;
			 myFile >> type;
			 int amount;
			 string name, author, brand;
			 double price;
			 if (type==1){
				 myFile >> name >> author >> price;
				 this->items[i]=new Book(name, price, author);
			 }
			 else if (type==2){
				 myFile >> name >> amount >> price;
				 this->items[i]=new SupermarketProduct(name, price, amount);
			 }
			 else if (type==3){
				 myFile >> brand >> name >> amount >> price;
				 this->items[i]=new Toy(name, price, brand, amount);
			 }
			 ++i;
		 }
		 myFile.close();
		 return true;
	 }
	 else{
		 cout << "Error: el fichero input.txt no existe";
		 exit(0);
	 }
}

double ItemProcessor::pvp() const{
	double totalPrice=0.0;
	for (int i=0;i<this->numberOfItems;i++){
		totalPrice+=roundf(this->items[i]->pvp()*100)/100;
	}
	return roundf(totalPrice*100)/100;
}

string ItemProcessor::generateTicket() const{
	stringstream ticket;
	ticket << "\n";
	for (int i=0;i<this->numberOfItems;i++){
		ticket << (this->items[i]->getInfo()) << "\n";
	}
	ticket << this->pvp() << " €" << "\n";
	return (ticket.str());
}
