#ifndef CMAKE_BOOST_DEMO_BAR_HPP
#define CMAKE_BOOST_DEMO_BAR_HPP

#include <string>


class Bar
{
public:
    Bar(std::string s);

    std::string get();
    void put(std::string&);

private:
    std::string bar_;

};


#endif //CMAKE_BOOST_DEMO_BAR_HPP
