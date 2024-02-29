#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int IntegerValue; // int have 2 or 4 bytes
    float FloatValue; // float have 8 bytes
    double DoubleValue; // double have 16 bytes
    char CharValue; // char have 1 byte
    bool BoolValue; // bool have 1 byte

    // 1 byte == 8 bits

    IntegerValue = 24;
    FloatValue = 24.80;
    DoubleValue = 24.8090000001;
    CharValue = 'a';
    BoolValue = false;

    printf("Integer value: %d\n", IntegerValue); // %d or %i is is used with int values
    printf("Float value: %f\n", FloatValue); // %f or %F is is used with float values
    printf("Double value: %lf\n", DoubleValue); // %lf is is used with int values
    printf("Char value: %c\n", CharValue); // %c is is used with char values
    printf("Bool value: %d\n", BoolValue); // %d is is used with bool values, 0 to false and 1 to true

    return 0;
}
