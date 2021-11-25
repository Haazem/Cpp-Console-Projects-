/*
 * User.cpp
 *
 *  Created on: Nov 18, 2021
 *      Author: moul
 */

#include "User.h"
void User::set_isadmin(bool f){
	is_admin = f;
}

void User::set_pass(string p){
	pass = p ;
}

void User::set_gmail(string g){
	gmail = g;
}

void User::set_name(string n ){
	name  = n ;
}

void User::set_username(string us){
	user_name = us;
}


string User::get_name(){
	return name;
}

string User::get_username(){
	return user_name;
}
string User::get_gmail(){
	return gmail;
}

string User::get_pass(){
	return pass;
}

bool User::get_isadmin(){
	return is_admin;
}

void User::print(){
	cout << "User Name : "<<user_name << endl;
	cout << "Name:" << name <<endl;
	cout <<"Gmail: "<< gmail << endl;
	cout << "PassWord: " << pass  <<endl;
	cout << endl;
}


void User::Read(string & _user_name){
	User::set_username(_user_name);

	string str;
	//cout << "Enter User Name: ";cin >> str;
	//User::set_username(str);

	cout << "Enter Name: ";cin >>str;
	User::set_name(str);

	cout << "Enter Gmail: ";cin >>str;
	User::set_gmail(str);

	cout <<"Enter Password: ";cin >> str;
	User::set_pass(str);
}


User::User():is_admin(false)

{
	// TODO Auto-generated constructor stub

}

User::~User() {
	// TODO Auto-generated destructor stub
}

