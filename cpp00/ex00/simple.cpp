#include "simple.hpp"


simple::simple(void)
{
    std::cout << "The is a constructer!" << std::endl;
    this->num = 18;
    std::cout << "num = " << this->num << std::endl;
    this->member_f();
}

simple::~simple(void)
{
    std::cout << "The is a destructer!" << std::endl;
}

void    simple::member_f()
{
    std::cout << "the is a Member function" << std::endl;
}
