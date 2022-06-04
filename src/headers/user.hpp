#include "headers/person.hpp"

class User : Person {
    public:
        User(std::string uLogin, std::string uPassword);
        User(User const& other);
        ~User() = default;
    private:
        std::string e_mail;
        std::string login;
        std::string password;
        int balance;
};