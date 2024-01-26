#include <iostream>

int main()
{
    int a = 12;                                        // 1100 in binary
    int b = 25;                                        // 11001 in binary
    std::cout << "a & b = " << (a & b) << std::endl;   // Bitwise AND
    std::cout << "a | b = " << (a | b) << std::endl;   // Bitwise OR
    std::cout << "a ^ b = " << (a ^ b) << std::endl;   // Bitwise XOR
    std::cout << "~a = " << (~a) << std::endl;         // Bitwise NOT
    std::cout << "b << 1 = " << (b << 1) << std::endl; // Left Shift
    std::cout << "b >> 1 = " << (b >> 1) << std::endl; // Right Shift
    return 0;
}
