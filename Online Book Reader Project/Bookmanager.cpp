/*
 * Bookmanager.cpp
 *
 */

#include "Bookmanager.h"


void  Bookmanager::LoadDatabase(){

	//Bookmanager::freeloadeData();
	cout << "Book manager loaded data base"<<endl;

	Book *book1 = new Book();
	book1->set_title("python for beginners");
	book1->set_author("VanDe");
	book1->set_id("100");
	vector<string> content = {"python a" , "python b" , "python c" , "python d"};
	book1->set_pages(content);
	//books_map[book1->get_id()] = book1;
	Bookmanager::Add_book(book1);

	Book *book2 = new Book();
	book2->set_title("SQl");
	book2->set_author("coursera");
	book2->set_id("200");
	vector<string> content2 = {"SQl a" , "SQl b" , "SQl c" , "SQl d"};
	book2->set_pages(content2);
	//books_map[book2->get_id()] = book2;
	Bookmanager::Add_book(book2);

	Book *book3 = new Book();
	book3->set_title("Data Science");
	book3->set_author("Udemy");
	book3->set_id("300");
	vector<string> content3 = {"Data Science a" , "Data Science b" , "Data Science c" , "Data Science d"};
	book3->set_pages(content3);
	//books_map[book3->get_id()] = book3;
	Bookmanager::Add_book(book3);

	Book *book4 = new Book();
	book4->set_title("Django");
	book4->set_author("ITI");
	book4->set_id("400");
	vector<string> content4 = {"Django a" , "Django b" , "Django c" , "Django d"};
	book4->set_pages(content4);
	//books_map[book4->get_id()] = book4;
	Bookmanager::Add_book(book4);

}


void Bookmanager::Add_book(Book* book) {
	books_map[book->get_id()] = book;
}

Bookmanager::Bookmanager() {
	// TODO Auto-generated constructor stub

}

Bookmanager::~Bookmanager() {
	// TODO Auto-generated destructor stub
	cout << "Destructor Bookmanager"<<endl;
	Bookmanager::freeloadeData();

}

