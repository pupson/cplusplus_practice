#include  <iostream>
#include <array>
#include <algorithm>

int main(){
    /*
    // std array loop
    int arr[] = {1,3,5};
    for(int i=0; i<3; i=i+1){
        std::cout << arr[i] << std::endl;
    }
    
    // range based for loops
    std::array<int,3> arr2{1,3,5};
    for(int i=0; i<arr2.size(); i=i+1){
        std::cout << arr2[i] << std::endl;
    }
    
    // optimized range loops
    for(auto& element: arr2){
        std::cout << element <<std::endl;
    }
    
    // while loops, evals at top of loop
    int countdown = 3;
    while(countdown > 0){
        std::cout << "print" << std::endl;
        countdown--;
    }
    
    // dowhile loops, evals at end of loop
    countdown = 3;
    do{
        std::cout << countdown << std::endl;
        countdown--;
    }while(countdown >0);
    
    */
    
    std::array<int,3> myArray;
    std::fill(std::begin(myArray),std::end(myArray),1024);
    
    for(int element : myArray){
        std::cout << element << std::endl;
    }
    
    return 0;
}