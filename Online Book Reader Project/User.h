/*
 * User.h
 *
 *  Created on: Nov 18, 2021
 *      Author: moul
 */

#ifndef USER_H_
#define USER_H_
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class User {
private:
	string user_name;
	string name;
	string gmail;
	string pass;
	bool is_admin;


public:

	void print();
	void Read(string & _user_name);


	void set_isadmin(bool f);
	void set_pass(string p);
	void set_gmail(string g);
	void set_name(string n );
	void set_username(string us);

	string get_name();
	string get_username();
	string get_gmail();
	string get_pass();
	bool get_isadmin();


	User();
	virtual ~User();

};

#endif /* USER_H_ */
