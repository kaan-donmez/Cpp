#include "StringFunctions.hpp"

int ConvertStringtoInt(std::string value)
{
    std::stringstream ss(value);
    int integerValue = 0;
    ss >> integerValue;
    return integerValue;
}

float ConvertStringtoFloat(std::string value)
{
    std::stringstream ss(value);
    float floatValue = 0;
    ss >> floatValue;
    return floatValue;
}

template <typename T>
std::string ConvertToString(T value)
{
    std::string temp = to_string(value);
    return temp;
}

std::string TrimText(const std::string &str, TrimType trimType)
{
    std::string temp = str;
    if (trimType == TrimType::Left)
    {
        temp.erase(temp.begin(), find_if(temp.begin(), temp.end(),
                                         [](int ch)
                                         { return !isspace(ch); }));
    }
    else if (trimType == TrimType::Right)
    {
        temp.erase(find_if(temp.rbegin(), temp.rend(),
                           [](int ch)
                           { return !isspace(ch); })
                       .base(),
                   temp.end());
    }
    else
    {
        temp.erase(temp.begin(), find_if(temp.begin(), temp.end(),
                                         [](int ch)
                                         { return !isspace(ch); }));
        temp.erase(find_if(temp.rbegin(), temp.rend(),
                           [](int ch)
                           { return !isspace(ch); })
                       .base(),
                   temp.end());
    }
    return temp;
}
