#include "cstddef.h"
#include <iostream>

int main(){
    mystd::byte b {static_cast<mystd::byte>(66)};
    auto x = mystd::to_integer<std::uint8_t>(b);
    std::cout << x << std::endl;
    return 0;
}