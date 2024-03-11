#include <iostream>

// to define a constant
#define Days 7

using namespace std;

int main(int argc, char **argv)
{

    // to creat a variable
    int a = 5;

    // two ways to declare a constant
    // 1. using #define
    // 2. using const
    const int month = 30;

    uint16_t x = 5;

    //integers
    //short int: 2 bytes -32768 to 32767 -> 2^15 to 2^15 - 1 8 bits the first bit is for the sign
    short b = 5;
    //int: 4 bytes -2147483648 to 2147483647
    int c = 5;
    //long int:  8 bytes (x64) 4 bytes (x32) -2147483648 to 2147483647
    long d = 5;
    //long long int: 8 bytes -9223372036854775808 to 9223372036854775807
    long long e = 5;

    cout << "short size: " << sizeof(b) << endl;
    cout << "int size: " << sizeof(c) << endl;
    cout << "long size: " << sizeof(d) << endl;
    cout << "long long size: " << sizeof(e) << endl;

    //float
    // 4 bytes 1.2E-38 to 3.4E+38
    float f = 5.5f;
    //double
    // 8 bytes 2.3E-308 to 1.7E+308
    double g = 5.5;
    //long double
    // 16 bytes 3.4E-4932 to 1.1E+4932
    long double h = 5.5;

    cout << "float size: " << sizeof(f) << endl;
    cout << "double size: " << sizeof(g) << endl;
    cout << "long double size: " << sizeof(h) << endl;

    //char
    // 1 byte -128 to 127
    char i = 'a';
    // the ASCII value of a is 97
    cout << "ASCII value of a:"<< int(i) << endl;
    cout << "char size: " << sizeof(i) << endl;


    return 0;
}
