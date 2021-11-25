/*
 * UserView.cpp
 *
 */

#include "UserView.h"

void UserView::Display(){

	int ch ;
	while(true){
		cout <<"User View"<<endl;
		cout <<"1) View Profile"<<endl;
		cout <<"2) View Your History Sessions"<<endl;
		cout <<"3) View System Books and select from them to read"<<endl;
		cout <<"4) Logout"<<endl;
		cout << endl;

		cout << "Enter Your Choice: ";
		cin >> ch;
		if (ch == 1){
			UserView::view_profile();
		}
		else if (ch ==2){
			UserView::list_his_current_reading_sessions();
		}

		else if (ch == 3){
			UserView::list_and_select_from_currentSystem_books();
		}
		else break;

	}
}

void UserView::list_his_current_reading_sessions(){
	cout << "Welcome"<<endl;

	//User *user = users_manager.Get_current_user();
	//string _user_name  = user->get_username();
	User *user = users_manager.Get_current_user();
	string _user_name = users_manager.Get_current_user()->get_username();


	if(books_sessions.size() == 0 ){
		cout << "There are not sessions"<<endl;
	}

	for (auto i : books_sessions){
	cout <<  "Title: "<<i.first <<  endl;
	cout << "Date: " << i.second << endl;
	cout << endl;
	}
}


void UserView::list_and_select_from_currentSystem_books(){
	map<string , Book*> mp= book_manager.Get_books_map();

	for (auto i : mp){
	cout << endl;
	cout <<"Book_ID: "<<i.second->get_id() <<endl ;
	cout << "Book_Title: " << i.second->get_title()<<endl;
	cout <<" Book_Author: " << i.second->get_author()<<endl;

	cout << "Book_Content:"<<endl;
	vector<string> pgs = i.second->get_pages();
	for (int j = 0 ; j < pgs.size() ; j ++ ){
	cout <<"Page#"<<j <<" " << pgs[j] << endl;
	}
	}cout << endl;

	string str , user_book;
	vector<string> user_book_pages;

	cout << "Enter Book ID you want to read without space: ";cin >> str;

	for (auto i : mp){
		if (i.second->get_id() == str){
			user_book = i.second->get_title();
			user_book_pages = i.second->get_pages();
			break;
		}
	}

	cout << "page number 1: " << user_book_pages[0]<<endl;
	cout << endl;

	int ch ;
	int counter = 0 ;
	while(true){
		cout <<"	1)Next Page"<<endl;
		cout <<"	2)Previous Page"<<endl;
		cout <<"	3)close"<<endl;
		cout <<"Enter Your Choice: ";cin >> ch;
		cout << endl;
		if (ch == 1){
			if(counter < user_book_pages.size() - 1){
				counter++;
				cout <<"page number:" <<counter +1<< " " << user_book_pages[counter] << endl;
				cout <<endl;
			}
			else {
				cout <<"page number:" <<counter+ 1 << " " << user_book_pages[counter] << endl;
				cout <<endl;
			}

		}

		else if (ch == 2)
		{
			if(counter  > 0 ){
				counter--;
				cout <<"page number:" <<counter+1 << " " << user_book_pages[counter] << endl;
				cout <<endl;
			}
			else {
				cout <<"page number:" <<counter+1 << " " << user_book_pages[counter] << endl;
				cout <<endl;
			}
		}

		else {
			cout << "Book Closed"<<endl;
			cout <<"Do you want to add session?"<<endl;
			break;
		}

	}

	cout << "1)YES"<<endl;
	cout <<"2)NO"<<endl;
	cout << "Enter Your Choice Please: " ; cin >> ch;
	if (ch == 1){

		User *user = users_manager.Get_current_user();
		string Time_Date = GetCurrentTimeDate();
		books_sessions.push_back({user_book, Time_Date});



	}


}

void UserView::view_profile(){
	User *user = users_manager.Get_current_user();

	user->print();


}


UserView::UserView(Usersmanager & users_manager, Bookmanager &book_manager) :
			users_manager(users_manager), book_manager(book_manager) {

	}


UserView::~UserView() {
	// TODO Auto-generated destructor stub

}

