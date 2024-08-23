#ifndef User_H
#define User_H

class User{
	private:
		std::string email;
		std::string password;
		std::string fullname;
	public:	
		User();
		User(std::string email, std::string password, std::string fullname);

		// Setter
		void setEmail(const std::string& email);
		void setPassword(const std::string& password);
		void setFullname(const std::string& fullname);

		// Getter
		std::string getEmail() const;
		std::string getPassword() const;
		std::string getFullname() const;

		void changePassword();
		void changeEmail();

		void printInfo();
};

#endif
