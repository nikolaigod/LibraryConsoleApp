#pragma once
#include "User.h"
#include "Book.h"

class Customer : public User{
private:
	Book* books;
public:
	Customer(Book* books = nullptr);
};

