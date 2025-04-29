#include <iostream>

int main(){
    
    const float PI = 3.14125;
    constexpr int factor = 3+6+8;
    std::cout << PI << std::endl;
    //PI = -42;
    std::cout << factor << std::endl;
    
    return 0;
}