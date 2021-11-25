/*
 * Book.h
 *
 *  Created on: Nov 18, 2021
 *      Author: moul
 */

#ifndef BOOK_H_
#define BOOK_H_

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include "User.h"

using namespace std;

class Book {
private:
	string id;
	string title;
	string author;
	vector<string> pages;

public:

	void set_title(string bk_name);
	void set_author(string au_name);
	void set_id(string _id);
	void set_pages(vector<string> _pages);

	string get_title();
	string get_author();
	string get_id();
	vector<string> get_pages();

	void print();
	void read();



	Book();
	virtual ~Book();

};

#endif /* BOOK_H_ */
