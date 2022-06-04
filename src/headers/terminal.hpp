#include <iostream>

namespace Console
{
    void SetCursorPosition(size_t x, size_t y);
    void Clean(size_t pos, size_t lines);
    void RedColor(std::string message);
    void ClearTerminal();
    void PressAnyKey();
}