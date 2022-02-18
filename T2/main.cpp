#include <iostream>

int main(){
    std::cout << "A is alphanumeric : " << std::isalnum('A') << std::endl;
    std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

    return 0;
}