#include <iostream>
#include <bitset> // To easily display binary representations
using namespace std;
int main() {
    // Learning Bitwise Operators
    // They perform operations on integer data at the individual bit-level.
    // Operators: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)

    unsigned char a = 5;  // Binary: 00000101
    unsigned char b = 9;  // Binary: 00001001
    
    cout << "a = " << (int)a << " (" << bitset<8>(a) << ")" << endl;
    cout << "b = " << (int)b << " (" << bitset<8>(b) << ")" << endl;
    cout << "----------------------------------------" << endl;

    // Bitwise AND (&): Sets each bit to 1 if both bits are 1
    cout << "a & b (AND) = " << (a & b) << " (" << bitset<8>(a & b) << ")" << endl;

    // Bitwise OR (|): Sets each bit to 1 if one of two bits is 1
    cout << "a | b (OR)  = " << (a | b) << " (" << bitset<8>(a | b) << ")" << endl;

    // Bitwise XOR (^): Sets each bit to 1 if only one of two bits is 1
    cout << "a ^ b (XOR) = " << (a ^ b) << " (" << bitset<8>(a ^ b) << ")" << endl;

    // Bitwise NOT (~): Inverts all the bits
    cout << "~a (NOT)    = " << (~a) << " (" << bitset<8>(~a) << ")" << endl;

    // Left Shift (<<): Shifts bits to the left, filling with zeros
    cout << "a << 1      = " << (a << 1) << " (" << bitset<8>(a << 1) << ")" << endl;

    // Right Shift (>>): Shifts bits to the right
    cout << "a >> 1      = " << (a >> 1) << " (" << bitset<8>(a >> 1) << ")" << endl;

    return 0;
}