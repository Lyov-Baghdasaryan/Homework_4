Part 1: Implement the User Class

1. Class Definition:
  - Implement a class User with the following private members:
    - std::string email
    - std::string password
    - std::string fullname
3. Encapsulation:
 - Provide public getter and setter methods for each member, ensuring that the password is securely managed. For example, the password should only be set if it meets certain criteria (length, characters, etc.), and it should not be retrievable directly.
3. Constructor:
 - Implement a constructor that initializes the User object with an email, password, and fullname.
4. Manipulation:
  - Implement a method changePassword that allows the user to change their password, only if the old password is correctly provided.
  - Implement a method updateEmail that allows updating the email after verifying the current password.
