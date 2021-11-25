/*
 * OnlineReader.cpp
 *
 */

#include "OnlineReader.h"

void OnlineReader ::Run(){


	OnlineReader::LoadDataBase();

	while(true){
	users_manager->Acsess_System();

	if(users_manager->Get_current_user()->get_isadmin()){

		AdminView view(*users_manager , *book_manager);
		view.Display();
	}

  else{
		UserView view(*users_manager , *book_manager);
		view.Display();

	    }
	}
}

OnlineReader::OnlineReader():book_manager(new Bookmanager),
users_manager(new Usersmanager){
	// TODO Auto-generated constructor stub

}

OnlineReader::~OnlineReader() {
	// TODO Auto-generated destructor stub
	cout << "Destructor Online Reader"<<endl;
		if(book_manager != nullptr ){
			delete book_manager;
			book_manager = nullptr;
		}
		if (users_manager != nullptr){
			delete users_manager;
			users_manager = nullptr;
		}

	}



