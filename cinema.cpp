#include <iostream>

enum {
    YOUNG = 15, // <= 17
    ADULT = 30, // >= 18 <= 59
    OLD = 20    // >= 60
};

int main(int argc, char** argv) {
    
    int friend1{}, friend2{};
    std::cin >> friend1 >> friend2;

    int valor{ 0 }, x{ 0 }, y{ 0 };
    
    // check friend 1

    if (friend1 <= 17)
        valor += YOUNG;
    else if (friend1 <= 59)
       valor += ADULT;
    else
        valor += OLD;

    // check friend 2

    if (friend2 <= 17)
        valor += YOUNG;
    else if (friend2 <= 59)
       valor += ADULT;
    else
        valor += OLD;

    std::cout << valor << '\n';
}