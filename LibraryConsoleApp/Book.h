#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
	string author;
	string heading;
	string genre;
	int productionYear;
	static int id;
public:
	Book(string author = "none", string heading = "none", string genre = "none", int prductionYear = 0);
};

