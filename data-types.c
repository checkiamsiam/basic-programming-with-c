#include <stdio.h>

void main()
{
    // basic data types
    int a = 10;                                // 4 bytes = 32 bits = 2^32 = 4294967296 = highest number that can be stored
    long long int longA = 1000000000000000000; // 8 bytes = 64 bits = 2^64 = 18446744073709551616 = highest number that can be stored

    float b = 10.5566; // 4 bytes 

    double longB = 10.5566; // 8 bytes
    char c = 'A';


    // pointers
    int *p = &a;
    
    printf("%p\n", p); // %p is format specifier for pointer
    printf("%d\n", a);                  // %d is format specifier for integer
    printf("Value of b is %0.2f\n", b); // %f is format specifier for float
    printf("Value of c is %c\n", c);    // %c is format specifier for character
}
