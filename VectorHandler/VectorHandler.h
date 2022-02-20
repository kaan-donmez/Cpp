#ifndef __VECTOR_HANDLE_H_
#define __VECTOR_HANDLE_H_

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
 * @brief Sort vector increased or decreased.
 *
 * @tparam T vector type.
 * @param vec passed vector.
 * @param reverse increased or decreased.
 */
template <typename T>
void SortVector(std::vector<T> &vec, bool reverse = true);

#endif /* VECTOR_HANDLE_H_ */