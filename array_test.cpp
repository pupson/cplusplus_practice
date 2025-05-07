#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main(){
    // int ids[100]; // raw array, std size of array
    std::array<int,100> ids; // STL array library
    
    std::iota(std::begin(ids),std::end(ids),0); // list comp assigning integers to array indices
    // ids[100000] = 9; will fire Seg fault for trying to access value outside of array

    // ids.at(100000) = 9; will give a more descriptive error than abbove
    ids.at(99) = 9; // assigns 99 indice to 9

    for(int i=0; i < 100; i++){
        //ids[i] = i;
        std::cout << ids[i] << std::endl;
    }

    return 0;
}