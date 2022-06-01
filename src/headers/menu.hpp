
#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>

class Menu {
    public:
        Menu(size_t size);
        Menu(size_t size, std::vector<std::string> v_options);
        Menu(Menu const& other);
        ~Menu() = default;

        void add_element(std::string element);
        void show_content();
    private:
        std::vector<std::string> options;
        size_t menu_size;
};