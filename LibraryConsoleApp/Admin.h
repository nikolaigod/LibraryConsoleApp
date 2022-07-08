#pragma once
#include "User.h"


class Admin : public User{
private:
	string email;
public:
	Admin(string email = "none");
};

