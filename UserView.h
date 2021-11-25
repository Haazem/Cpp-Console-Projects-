/*
 * UserView.h
 *
 *  Created on: Nov 19, 2021
 *      Author: moul
 */

#ifndef USERVIEW_H_
#define USERVIEW_H_

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include "User.h"
#include "Book.h"
#include "Usersmanager.h"
#include "Bookmanager.h"
#include "OnlineReader.h"

using namespace std;

class UserView {

private:
	Usersmanager &users_manager;
	Bookmanager &book_manager;

	vector<pair<string , string>>books_sessions;

	void freeloadeData(){
			books_sessions.clear();
		}

public:

	void view_profile();
	void list_and_select_from_currentSystem_books();
	void list_his_current_reading_sessions();
	void Display();

	string GetCurrentTimeDate() {	// src: https://stackoverflow.com/questions/17223096/outputting-date-and-time-in-c-using-stdchrono
		auto now = std::chrono::system_clock::now();
		auto in_time_t = std::chrono::system_clock::to_time_t(now);

		std::stringstream ss;
		ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %X");
		return ss.str();
	}


	UserView(Usersmanager &_users_manager , Bookmanager &_book_manager);
	UserView();

	virtual ~UserView();
};

#endif /* USERVIEW_H_ */
