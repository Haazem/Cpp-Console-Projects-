/*
 * Usersmanager.cpp
 *
 *  Created on: Nov 18, 2021
 *      Author: moul
 */

#include "Usersmanager.h"



void Usersmanager::LoadedDatabase(){

	cout <<"users manager Loaded Data base"<<endl;
	Usersmanager::FreeLoadedData();


	User *user1 = new User();
	user1->set_name("Hazem Mohamed Ahmed");
	user1->set_username("hazem");
	user1->set_gmail("hazem111@gmail.com");
	user1->set_pass("123");
	user1->set_isadmin(true);
	users_map[user1->get_username()] = user1;

	User *user2 = new  User();
	user2->set_name("Mohamed Ahmed Mohamed");
	user2->set_username("Mohamed");
	user2->set_gmail("Mohamed22@gmail.com");
	user2->set_pass("456");
	user2->set_isadmin(false);
	users_map[user2->get_username()] = user2;

	for (auto i : users_map){
		cout << i.first << " " << i.second->get_pass() << endl;
	}

}

void Usersmanager::add_session(){



}

void Usersmanager::Acsess_System(){
	cout << "1) Login "<<endl;
	cout << "2)  SignUp "<<endl;
	cout << endl;

	int input;
	cout << "Enter Your Choice in [1:2]: ";cin >> input;
	if (input == 1) Usersmanager::login();
	else Usersmanager::sign_up();

}

void Usersmanager::login(){

	//Usersmanager::LoadedDatabase();

	while (true) {
		string user_name, pass;
		cout << "Enter user_name & password: ";
		cin >> user_name >> pass;

		if (!users_map.count(user_name)) {
			cout << "\nInvalid user user_name or password. Try again\n\n";
			continue;
		}

		User* user_exist = users_map.find(user_name)->second;

		if (pass != user_exist->get_pass()) {
			cout << "\nInvalid user user_name or password. Try again\n\n";
			continue;
		}

		current_user = user_exist;
		break;
	 }

	}

void Usersmanager::sign_up(){
	//Usersmanager::LoadedDatabase();

	string user_name ;
	while(true){

		cout << "Enter user name : "; cin >> user_name ;
		if (users_map.count(user_name)){
			cout << "try again this user name  is used "<<endl;
			continue;
		}
		else break;
	}

	User *user = new User();
	user->Read(user_name);
	users_map[user->get_username()] = user;
	current_user = user;

	   //current_user->Read(user_name);
	   //users_map[current_user->get_username()] = current_user;
	   //current_user->Read(user_name);
	   //users_map[current_user->get_username()] = current_user;

}



Usersmanager::Usersmanager() {
	// TODO Auto-generated constructor stub

}

Usersmanager::~Usersmanager() {
	// TODO Auto-generated destructor stub
	cout <<"From Destructor"<<endl;
	Usersmanager::FreeLoadedData();

}

