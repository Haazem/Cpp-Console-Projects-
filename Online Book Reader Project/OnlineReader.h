/*
 * OnlineReader.h
 *
 */

#ifndef ONLINEREADER_H_
#define ONLINEREADER_H_
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include "User.h"
#include "Book.h"
#include "Usersmanager.h"
#include "Bookmanager.h"
#include "OnlineReader.h"
#include "UserView.h";
#include "AdminView.h"

using namespace std;

class OnlineReader {

private:

	Bookmanager *book_manager;
	Usersmanager *users_manager;

	void LoadDataBase(){
		book_manager->LoadDatabase();
		users_manager->LoadedDatabase();
	}


public:


	void Run();


	OnlineReader();

	virtual ~OnlineReader();

};

#endif /* ONLINEREADER_H_ */
