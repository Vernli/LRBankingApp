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
    User current; 
    switch (input)
    {
    case 1:
        Console::SetCursorPosition(6, 1);   // nie wykonuje sie
        getline(cin, current.login);
        Console::SetCursorPosition(9, 2);
        getline(cin, current.password);
        break;
    case 2:
        // set cursor
        Console::SetCursorPosition(5,1);
        Console::SetCursorPosition(10,2);
        Console::SetCursorPosition(4,3);
        Console::SetCursorPosition(7,4);
        Console::SetCursorPosition(6,5);
        Console::SetCursorPosition(9,6);
        break;
    }
}