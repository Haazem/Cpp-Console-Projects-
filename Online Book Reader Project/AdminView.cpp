/*
 * AdminView.cpp
 *
 */

#include "AdminView.h"


void AdminView::Display(){

	int ch ;
	while(true){

		cout << "1) Add Book"<<endl;
		cout << "2) view profile "<<endl;
		cout << "3) Logout"<<endl;
		cout << endl;
		cout << "Enter Your Choice: ";cin >> ch ;
		cout << endl;

		if (ch == 1){
			AdminView::Add_new_book();

		}
		else if  (ch == 2){
			AdminView::view_profile();
		}
		else break;

	}


}

void AdminView::view_profile(){
	User  * user = users_manager.Get_current_user();
	user->print();
}

void AdminView::Add_new_book() {
		Book *book = new Book();
		book->read();
		book_manager.Add_book(book);

	}


AdminView::AdminView(Usersmanager &users_manager, Bookmanager &books_manager) :
			users_manager(users_manager), book_manager(books_manager) {

	}

AdminView::~AdminView() {
	// TODO Auto-generated destructor stub
}

