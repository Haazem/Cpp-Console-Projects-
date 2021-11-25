/*
 * AdminView.h
 *
 *  Created on: Nov 22, 2021
 *      Author: moul
 */

#ifndef ADMINVIEW_H_
#define ADMINVIEW_H_
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include "User.h"
#include "Book.h"
#include "Usersmanager.h"
#include "Bookmanager.h"
#include "OnlineReader.h"
#include "UserView.h"

using namespace std;

class AdminView {

private:

	Usersmanager &users_manager;
	Bookmanager &book_manager;


public:

	void Display();
	void Add_new_book();
	void view_profile();

	AdminView(Usersmanager &_users_manager, Bookmanager &_book_manager);

	virtual ~AdminView();
};

#endif /* ADMINVIEW_H_ */
