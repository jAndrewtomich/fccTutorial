#include <iostream>

// I CAN EITHER NAME THE FUNCTION...
// -- -- -- -- -- --
/*auto andrew_lambda = [](){
    std::cout << "Hey, Drew!" << std::endl;
};*/

int main(){
    // ... AND CALL IT LATER BY NAME
    // -- -- --
    //andrew_lambda();

    // OR SIMPLY DEFINE THE FUNCTION ANONYMOUSLY AND CALL IT IMMEDIATELY WITH ()
    // -- -- -- -- -- --
    /*[](){
        std::cout << "Hey, Drew!" << std::endl;
    }();*/

    // PASS IN PREDEFINED ARGUMENTS
    double x {2.7}, y {3.9};

    // INITIALIZE VARIABLES FUNCTIONALLY
    auto z = [&](){
        //std::cout << x + y << std::endl;
        return x + y;
    }();

    std::cout << z << std:: endl;

    auto q = [&](){
        std::cout << z + 1 << std::endl;
        return z + 1;
    }();

    std::cout << z << '\n';

    [=](){
        std::cout << q << '\n';
    }();
    
    return 0;
}
