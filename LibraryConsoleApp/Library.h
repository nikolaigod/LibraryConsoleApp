#pragma once
#include "User.h"
#include "Book.h"
#include<iostream>
using namespace std;

class Library{
public:
	bool LogIn(string, string);
	void seeBooks();
	void seeProfile();
	void takeBook();
	void returnBook(Book);
};

