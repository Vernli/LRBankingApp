#include <iostream>
#include "headers/menu.hpp"

using namespace std;

int main() {
    Menu* mainMenu = new Menu (3, {"1. Login", "2. Register", "0. Exit"}); 
    Menu* loginMenu = new Menu (2, {"Login:", "Password:"});
    Menu* registerMenu = new Menu (6, {"Name:", "Last name:", "Age:", "E-mail:", "Login:", "Password:"});
    //#####################################################################
    mainMenu->show_content();
    int input;

    bool switchDone = false;
    do
    {
        cin >> input;
        switch(input)
        {
            case 1:
                loginMenu->show_content();
                switchDone = true;
                break;
            case 2:
                registerMenu->show_content();
                switchDone = true;
                break;
            case 0:
                switchDone = true;
                break;
            default:
                cout << "Invalid Option!" << endl;
                break;
        }
    } while (!switchDone);

    // switch (input) {};
}