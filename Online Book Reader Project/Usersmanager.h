/*
 * Usersmanager.h
 *
 *  
 */

#ifndef USERSMANAGER_H_
#define USERSMANAGER_H_
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include "User.h"
#include "Book.h"
#include "Usersmanager.h"

using namespace std;

class Usersmanager {
private  :
	User *current_user = nullptr;
	map<string , User*> users_map;

	void FreeLoadedData() {
			for (auto pair : users_map) {
				delete pair.second;
			}

			users_map.clear();
			current_user = nullptr;
		}

public:

	Usersmanager(const Usersmanager&) = delete;//
	void operator=(const Usersmanager&) = delete; //

	User *Get_current_user(){
		return current_user;
	}

	void add_session();

	void  Acsess_System();
	void login();
	void sign_up();
	void LoadedDatabase();

	Usersmanager();
	virtual ~Usersmanager();
};

#endif /* USERSMANAGER_H_ */
