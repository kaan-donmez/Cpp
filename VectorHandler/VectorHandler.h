#ifndef __VECTOR_HANDLER_H_
#define __VECTOR_HANDLER_H_

#include <algorithm>
#include <iostream>
#include <vector>
#include <ctime>

/**
 * @brief Generate vector with random values.
 *
 * @tparam T vector type.
 * @param vec passed vector.
 * @return std::vector<T>.
 */
template <typename T>
std::vector<T> GenerateVector(std::vector<T> &vec);

/**
 * @brief Print a vector at terminal.
 *
 * @tparam T vector type.
 * @param vec passed vector.
 */
template <typename T>
void PrintVector(std::vector<T> &vec);

/**
 * @brief This function is used to print 2D vector.
 *
 * @tparam T
 * @param vec
 */
template <typename T>
void Print2DVector(std::vector<T> vec);

/**
 * @brief This function is used to count element in vector.
 *
 * @tparam T
 * @tparam K
 * @param vec
 * @param value
 * @return K is elemnet count of vector.
 */
template <typename T, typename K>
K CountElementInVector(std::vector<T> &vec, K value);

/**
 * @brief Sort vector increased or decreased.
 *
 * @tparam T vector type.
 * @param vec passed vector.
 * @param reverse increased or decreased.
 */
template <typename T>
void SortVector(std::vector<T> &vec, bool reverse = true);

#endif /* __VECTOR_HANDLER_H_ */
