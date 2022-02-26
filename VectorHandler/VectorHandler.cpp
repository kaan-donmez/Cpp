#include "VectorHandler.h"

std::vector<int> GenerateIntegerVector(int vectorSize, int min, int max)
{
    std::vector<int> tempVec(vectorSize);
    std::random_device dev;
    std::default_random_engine rng(dev());
    std::uniform_int_distribution<> dist(min, max);

    auto gen = [&dist, &rng]()
    { return dist(rng); };
    generate(tempVec.begin(), tempVec.end(), gen);
    return tempVec;
}

std::vector<float> GenerateFloatVector(int vectorSize, int min, int max)
{
    std::vector<float> tempVec(vectorSize);
    std::random_device dev;
    std::default_random_engine rng(dev());
    std::uniform_real_distribution<> dist(min, max);

    auto gen = [&dist, &rng]()
    { return dist(rng); };
    generate(tempVec.begin(), tempVec.end(), gen);
    return tempVec;
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
