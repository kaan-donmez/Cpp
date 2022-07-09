#ifndef __STRING_FUNTIONS_H_
#define __STRING_FUNTIONS_H_

#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>

enum class TrimType
{
    Left,
    Right,
    Both
};

const std::string WHITESPACE = " \t\n\r";

/**
 * @brief This function is used to convert string variable to integer variable.
 *
 * @param value
 * @return int
 */
int ConvertStringtoInt(std::string value);

/**
 * @brief This function is used to convert string variable to float variable.
 *
 * @param value
 * @return float
 */
float ConvertStringtoFloat(std::string value);

/**
 * @brief This function is used to convert any variable to string variable.
 *
 * @param T
 * @param value
 * @return std::string
 */
template <typename T>
std::string ConvertToString(T value);

/**
 * @brief This function is used to trim strings depending on your choice.
 *
 * @param str
 * @param trimType
 * @return std::string
 */
std::string TrimText(const std::string &str, TrimType trimType);

#endif /* __STRING_FUNTIONS_H_ */