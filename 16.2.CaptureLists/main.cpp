#include <iostream>

// Reference => freeCodeCamp.org

int main(){

    /*
    // Capture Lists
    double m{35};
    double n{45};

    auto func0 = [m,n](){   // Capturing by comma seperated value
        std::cout << "m + n : " << (m + n) << std::endl;    // to capture m and n, put them in square brackets.
    };
    
    func0();
    */


    // You can capture by value or reference
    // Let's see first how to capture by value
    /*
    int value1 {38};

    auto func1 = [value1](){    // if you write like this, this means that capturing by value
                            // in this case the value1 inside lambda func. will be a copy, not the original one.
        std::cout << "Inner value of 'value1' is : " << value1 << " and the address is : " << &value1 << std::endl;
        std::cout << std::endl;
    };

    for(size_t i{0}; i < 5 ; i++){
        std::cout << "Outer value of 'value1 is : " << value1 << " and the address is : " << &value1 << std::endl;
        func1();
        value1++;
    }
    */


    // Capturing by Reference
    int value2 {59};

    auto func2 = [&value2](){   // if you write like this, this means that capturing by reference
                            // in this case the value2 here will be the original value. And it will be affected by the change(in outer)
        std::cout << "Inner value of value2 is : " << value2 << " and the address of it is : " << &value2 << std::endl;
        std::cout << std::endl;
    };

    for (size_t j{0}; j < 5 ; j++){
        std::cout << "Outer value of value2 is : " << value2 << " and the address of it is : " << &value2 << std::endl;
        func2();
        value2++;
    }

    return 0;
}