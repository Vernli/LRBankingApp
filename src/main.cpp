#include <iostream>
#include <limits>
#include "headers/menu.hpp"
#include "headers/terminal.hpp"
#include "headers/user.hpp"

using namespace std;

int main() {
    Console::Clear();   // Clear

    Menu* mainMenu = new Menu (3, {"1. Login", "2. Register", "0. Exit"}); 
    Menu* loginMenu = new Menu (2, {"Login:", "Password:"});
    Menu* registerMenu = new Menu (6, {"Name:", "Last name:", "Age:", "E-mail:", "Login:", "Password:", "Repeat password:"});
    //#####################################################################
    int input;

    bool switchDone = false;
    do
    {
        mainMenu->show_content();
        cout << ":: "; cin >> input;
        switch(input)
        {
            case 1:
                Console::Clear();
                loginMenu->show_content();
                switchDone = true;
                break;
            case 2:
                Console::Clear();
                registerMenu->show_content();
                switchDone = true;
                break;
            case 0:
                return 0;
                break;
            default:
                Console::Clear();
                Console::RedColor("Invalid Option!");
                break;
        }
    } while (!switchDone);

    // Change soon
    User *current = new User;   // nieczytelna nazwa zmiennej

    // moze zmiana na ctor usera
    switch (input)
    {
    case 1:
        Console::SetCursorPosition(6, 1);   // Login: _ - NIE WYKONUJE SIE
        getline(cin, current->login);
        Console::SetCursorPosition(9, 2);   // Password: _ 
        getline(cin, current->password);
        break;
    case 2:
        // set cursor
        std::string usr_input;
        Console::SetCursorPosition(5,1);    // Name: _
        getline(cin, usr_input);
        current->setName(usr_input);

        Console::SetCursorPosition(10,2);   // Last name: _
        getline(cin, usr_input);
        current->setName(usr_input);

        Console::SetCursorPosition(4,3);    // Age: _
        getline(cin,usr_input);
        current->setName(usr_input);

        Console::SetCursorPosition(7,4);    // E-mail: _
        getline(cin, current->e_mail);

        Console::SetCursorPosition(6,5);    // Login: _
        getline(cin, current->login);

        std::string temp_password;
        Console::SetCursorPosition(9,6);    // Password:_
        getline(cin, usr_input);
        Console::SetCursorPosition(16,7);
        getline(cin, temp_password);

        if (temp_password.compare(usr_input) == 0) {
            current->password = usr_input;
        }

        break;
    }
}