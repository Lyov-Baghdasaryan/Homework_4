#include <iostream>
#include <cstring>
#include "user.h"

User::User() = default;

User::User(std::string email, std::string password, std::string fullname){
	setEmail(email);
	setPassword(password);
	setFullname(fullname);
}

// Setters

void User::setEmail(const std::string& email){
	this->email = email;
}
void User::setPassword(const std::string& password){
	const char* ptr = &password[0];
	int count = 0;
	while(*ptr){
		if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= '0' && *ptr <= '9') || count > 15){
			count++;
		}else{
                        std::cout << "* Password can contain only (0...9) and (...z) symbols, the number of which must not exceed 15" << std::endl;
                        return;
                }
		++ptr;

	}
	if(count < 4){
		std::cout << "* The number of characters must not be less than 4" << std::endl;
		return;
	}	

	this->password = password;
}	
void User::setFullname(const std::string& fullname){
	const char *ptr = &fullname[0];
	int countOfWord = 0;
	bool flagInWord = false;

	while(*ptr++){
       		if(*ptr != ' ' && flagInWord == false){
			flagInWord = true;
			countOfWord++;
		}
		if(*ptr == ' ' && flagInWord == true){
			flagInWord = false;
		}	
	}

	if(countOfWord == 2){
		this->fullname = fullname;
	}else{
		std::cout << "* You must enter a first and last name" << std::endl;
	}	
}

// Getters

std::string User::getEmail() const{
	return email;
}	
std::string User::getPassword() const{
	return password;
}
std::string User::getFullname() const{
	return fullname;
}

// Methods

void User::changePassword(){
	std::cout << "\t-- You want to change your password --" << std::endl;
	std::cout << "Enter (x) to stop the operation" << std::endl;
	
	std::string someInput;
	while(1){

		std::cout << "Please enter your old password to change it -> ";
		std::cin >> someInput;
		
		if(!(strcmp(&someInput[0], &password[0]))){
			std::cout << "Enter the new password -> "; 
			std::cin >> someInput;
			setPassword(&someInput[0]);
			
			std::cout << std::endl;
			break;
		}else if(!(strcmp(&someInput[0], "x"))){
			std::cout << std::endl;
			break;
		}
	
		std::cout << "The password you entered is incorrect, please try again" << std::endl;
	}	

}

void User::changeEmail(){
	std::cout << "\t-- You want to change your email --" << std::endl;
        std::cout << "Enter (x) to stop the operation" << std::endl;

        std::string someInput;
        while(1){
		
		std::cout << "Please enter password to change email -> ";
                std::cin >> someInput;

		if(!(strcmp(&someInput[0], &password[0]))){
                        std::cout << "Enter the new email -> ";
                        std::cin >> someInput;
                        setEmail(&someInput[0]);

                        std::cout << std::endl;
                        break;
                }else if(!(strcmp(&someInput[0], "x"))){
                        std::cout << std::endl;
                        break;
                }


		std::cout << "The password you entered is incorrect, please try again" << std::endl;
	}

}

void User::printInfo(){
	std::cout << "Email : " << email << std::endl;
	std::cout << "Password : " << password << std::endl;
	std::cout << "Fullname : " << fullname << std::endl;
	std::cout << std::endl;
}
