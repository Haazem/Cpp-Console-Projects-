/*
 * Book.cpp
 *
 *  Created on: Nov 18, 2021
 *      Author: moul
 */

#include "Book.h"


void  Book::read(){
	string   str;
	int pages_count ;

	cout << "Enter ID: ";cin >>str;
	Book::set_id(str);
	cout << endl;

	cout << "Enter Title without spaces: ";cin >> str;
	Book::set_title(str);
	cout << endl;

	cout << "Enter author: ";cin >>str;
	Book::set_author(str);
	cout << endl;

	cout << "How many pages : "; cin >> pages_count;
	cout << endl;

	for (int i = 0 ; i < pages_count ; i ++ ){
		cout << "Enter page " << i + 1 <<  ": " ;cin >> str;
		pages.push_back(str);
	}
cout << endl;

}



void Book::set_title(string bk_name){
	title = bk_name;
}

void Book::set_author(string au_name){
	author = au_name;
}

void Book::set_pages(vector<string> _pages){
	pages = _pages;
}

void Book::set_id(string _id){
	id = _id;
}


string Book::get_title(){
	return title;
}

string Book::get_author(){
	return author;
}

string Book::get_id(){

	return id;
}

vector<string> Book::get_pages(){
	return pages;
}

void Book::print(){
	cout <<id <<" " <<title << " " << author <<endl;
	vector<string> vp = Book::get_pages();
	for (auto i : vp){
		cout << i << " " ;
	}cout << endl;
}



Book::Book():title("NotFound") , author("NotFound")  {
	// TODO Auto-generated constructor stub

}

Book::~Book() {
	// TODO Auto-generated destructor stub
}

