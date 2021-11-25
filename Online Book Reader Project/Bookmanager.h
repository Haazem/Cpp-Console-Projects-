/*
 * Bookmanager.h
 *
 *  Created on: Nov 19, 2021
 *      Author: moul
 */

#ifndef BOOKMANAGER_H_
#define BOOKMANAGER_H_
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include "User.h"
#include "Book.h"
#include "Usersmanager.h"

using namespace std;



class Bookmanager {
private :

	map<string , Book*> books_map;

	void freeloadeData(){
		for (auto pair : books_map){
			delete pair.second;
		}
		books_map.clear();
	}


public:
	Bookmanager(const Bookmanager&) = delete;

	void Add_book(Book *book);

	const map<string , Book*> Get_books_map(){
		return books_map;
	}
	void LoadDatabase();
	//void print_books();

	Bookmanager();
	virtual ~Bookmanager();
};

#endif /* BOOKMANAGER_H_ */
