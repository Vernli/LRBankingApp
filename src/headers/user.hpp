#include <string>

class User {
    public:
        User() = default;
        User(std::string uLogin, std::string uPassword);
        User(User const& other);
        ~User() = default;
        std::string e_mail;
        std::string login;
        std::string password;
        int balance;
};