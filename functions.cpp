#include <iostream>

int add(int,int);
auto add(float a,float b) -> float;

void print(void){
    std::cout << "hello" << std::endl;
} //returns nothing

int main(){
    
    //add(1,2);
    // arguments are 1,2
    std::cout << add(1.2f,(float)2) << std::endl;
    print();
    return 0;
}

int add(int a,int b){
    return a+b; // can only return 1 value
}

float add(float a,float b){
    return a+b; // can only return 1 value
}