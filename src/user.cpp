#include "headers/user.hpp"

User::User(std::string uLogin, std::string uPassword) : login(uLogin), password(uPassword) {};
User::User(User const& other) : login(other.login), password(other.password) {};
  
