#include "headers/menu.hpp"


// Ctor

Menu::Menu(size_t size) : menu_size(size) {
    options.reserve(menu_size);
}

Menu::Menu(size_t size, std::vector<std::string> v_options) : menu_size(size), options(v_options) {
    if (size < options.size()) {
        throw std::out_of_range("Too many elements | Insert size is higher than elements of v_options");
    }
};

Menu::Menu(Menu const& other) : options(other.options), menu_size(other.menu_size) {};


// Func

// Wprowadzanie elementu do vectora
void Menu::add_element(std::string element) {
    options.push_back(element);

    if (options.size() > menu_size) {
        throw std::out_of_range("Too many elements");
    }
}

// Pokazanie zawartosci
void Menu::show_content() {
    for (auto el : options) {
        std::cout << el << std::endl; 
    }
}