#include "StringFunctions.hpp"

int ConvertStringtoInt(string value)
{
    stringstream ss(value);
    int integerValue = 0;
    ss >> integerValue;
    return integerValue;
}

float ConvertStringtoFloat(string value)
{
    stringstream ss(value);
    float floatValue = 0;
    ss >> floatValue;
    return floatValue;
}