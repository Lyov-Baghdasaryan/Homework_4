#include <iostream>
#include "user.h"

int main()
{
	User obj;
	std::string email = "hello@gmail.com";
	obj.setEmail(email);

	std::string pass = "hjm1234";
	obj.setPassword(pass);

	std::string fullname = "Henry Streetman";
	obj.setFullname(fullname);

	obj.printInfo();

	User obj2("john@gmail.com", "akckbk", "John Smith");
	obj2.printInfo();

	obj2.changeEmail();
	obj2.changePassword();
	obj2.printInfo();

	return 0;
}
