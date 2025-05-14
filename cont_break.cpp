#include <iostream>

int main(){
    // continue; prints nothing
    for(int x=0; x<10; x++){
        for( int i=0; i <10; i++){
            // break; ignores inner loop
            std::cout << "start of loop" << std::endl;
            std::cout << "i is: " << i << std::endl;
        }
            std::cout << "x is: " << x << std::endl;
    }
    
    return 0;
}