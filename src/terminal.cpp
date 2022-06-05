#include "headers/terminal.hpp"

#ifdef __linux__
void Console::SetCursorPosition(size_t x, size_t y){
    printf("\033[%d;%dH", y , x+2);
}

void Console::Clean(size_t pos, size_t lines = 1){
        SetCursorPosition(0,pos);
        for (int i=0; i<lines; i++)
            std::cout << std::string(64, ' ') << std::endl;
        SetCursorPosition(65,pos-1);
}

void Console::RedColor(std::string message){
        printf("\033[1;31m%s\033[0m\n", message.c_str());
}

void Console::Clear()
{
        system("clear");
}

void Console::PressAnyKey()
{
        system ("read");
}

void Console::Exit()
{
        system("exit");
}

#elif __WIN32
#include <windows.h>

void Console::SetCursorPosition(size_t x, size_t y) {
        COORD Coord;
        Coord.X = x+1;

        Coord.Y = y-1;  // Windows Prompt Index from 0
        
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
    };

void Console::FakeClean(size_t pos, size_t lines = 1){
        SetCursorPosition(0,pos);
        for (int i=0; i<lines; i++)
            std::cout << std::string(64, ' ') << std::endl;
        SetCursorPosition(65,pos-1);
}
void Console::RedColor(std::string message){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);
        std::cout << message << std::endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}

void Console::Clear()
{
        system("cls");
}

void Console::PressAnyKey()
{
        system ("pause");
}

void Console::Exit()
{
        system("exit");
}
#endif