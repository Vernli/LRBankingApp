#include <string>
#include <vector>

// User - Klasa definiujaca "kim jest uzytkownik"
// Odbior danych z Menu i umieszczenie ich w User, Odebranie danych z bazy danych i umieszczenie ich w User

class User {  
    public:
        User();
    private:
        std::string login;
        std::string password;
        std::string name;
        std::string last_name;
        std::string e_mail;
        int balance;
};