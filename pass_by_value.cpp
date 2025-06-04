#include <iostream>

void SetValue(int arg){
    std::cout << "SetValue x initial value: " << arg << std::endl;
    arg = 9999;
    
    std::cout << "SetValue x post value: " << arg << std::endl;
    std::cout << "SetValue x addr: " << &arg << std::endl;
}

int main(){
    
    int x= 42;
    std::cout << "x value: " << x << std::endl;
    std::cout << "x addr: " << &x << std::endl;
    // call func
    SetValue(x);
    // check x's value
    std::cout << "x value: " << x << std::endl;
    std::cout << "x addr: " << &x << std::endl;
    
    return 0;
}
