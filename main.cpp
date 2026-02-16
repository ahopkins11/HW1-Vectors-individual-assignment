#include <iostream>
#include "Vector.h"

int main() {
    //Constructor
    Vector v;

    //push_back
    for (int i = 0; i < 1000; i++) {
        v.push_back(i * 2);
    }
    std::cout << "Size after 1000 pushes: " << v.size() << std::endl;
    std::cout << "Capacity after 1000 pushes: " << v.capacity() << std::endl;

    //operator[]
    std::cout << "Element at index 500: " << v[500] << std::endl;
    v[500] = 42; 
    std::cout << "Modified index 500: " << v[500] << std::endl;

    //size for loop bounds
    std::cout << "First 5 elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    //Assignment Operator
    Vector v2;
    v2 = v;
    v2[0] = 999;
    std::cout << "Assignment Test - V2[0]: " << v2[0] << " | V[0]: " << v[0] << std::endl;

    //Copy Constructor
    Vector v3(v);
    v3[0] = 777;
    std::cout << "Copy Cons Test - V3[0]: " << v3[0] << " | V[0]: " << v[0] << std::endl;

    return 0;
}
