#include "VectorHandler.h"

template <typename T>
std::vector<T> GenerateVector(std::vector<T> &vec)
{
    std::vector<T> tempVec;
    srand(time(0));
    generate(vec.begin(), vec.end(), []()
             { return (rand() % 100); });
    for (auto &temp : vec)
    {
        tempVec.push_back(temp);
    }
    return tempVec;
}

template <typename T>
void PrintVector(std::vector<T> &vec)
{
    for (const auto &value : vec)
    {
        std::cout << value << " ";
    }
}

template <typename T>
void Print2DVector(std::vector<T> vec)
{
    for (auto vect1D : vec)
    {
        for (auto x : vect1D)
        {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
}

template <typename T, typename K>
K CountElementInVector(std::vector<T> &vec, K value)
{
    return count(vec.begin(), vec.end(), value);
}

template <typename T>
void SortVector(std::vector<T> &vec, bool reverse = true)
{
    if (reverse == true)
    {
        sort(vec.begin(), vec.end());
    }
    else
    {
        sort(vec.begin(), vec.end(), greater<T>());
    }
}