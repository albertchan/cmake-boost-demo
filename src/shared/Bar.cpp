#include "Bar.hpp"

Bar::Bar(std::string s) : bar_(s)
{
    // constructor
}

std::string Bar::get()
{
    return bar_;
}

void Bar::put(std::string &text)
{
    bar_ = text;
}