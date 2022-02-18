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

    double x {2.7}, y {3.9};

    [](double a, double b){
        std::cout << a + b << std::endl;
    }(x, y);
    
    return 0;
}