#include <iostream>

// If too large, Stack overflow!!!

int countdown(int n){
    // 1.  Base case
    if(n==0){
        std::cout << "0...blastoff" << std::endl;
        return 0;
    }    
    // Recursive case
    std::cout << n << std::endl;
    return countdown(n-1);
    
}

int main(){
    
    countdown(5);
    
    return 0;
}