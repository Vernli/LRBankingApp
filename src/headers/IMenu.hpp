#include <string>

// Funkcje zarzadzania menu
class IMenu {
    public:
        virtual void getInput() = 0;
        virtual void createChoice() = 0;
        virtual void returnAction() = 0;    // template
    private:
        std::string input;
};