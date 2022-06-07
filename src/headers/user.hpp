#include <string>
#include "person.hpp"

class User : Person{
    public:
        User() = default;
        User(std::string uLogin, std::string uPassword);
        User(User const& other);
        ~User() = default;
        std::string e_mail;
        std::string login;
        std::string password;
        int balance;

        void setName(std::string uname) {
            name = uname;
        }
        void setLastName(std::string ulast_name) {
            last_name = ulast_name;
        }
        void setAge(std::string uage) {
            age = stoi(uage);
        }
};