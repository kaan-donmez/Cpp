#ifndef __STRING_FUNTIONS_H_
#define __STRING_FUNTIONS_H_

#include <sstream>
#include <string>
#include <iostream>

using namespace std;

/**
 * @brief This function is used to convert string variable to integer variable.
 *
 * @param value
 * @return int
 */
int ConvertStringtoInt(string value);

/**
 * @brief This function is used to convert string variable to float variable.
 *
 * @param value
 * @return float
 */
float ConvertStringtoFloat(string value);

/**
 * @brief This function is used to convert any variable to string variable.
 *
 * @tparam T
 * @param value
 * @return string
 */
template <typename T>
string ConvertToString(T value);

#endif /* __STRING_FUNTIONS_H_ */