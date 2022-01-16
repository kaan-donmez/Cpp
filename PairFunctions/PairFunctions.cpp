#include "PairFunctions.hpp"

template <typename T>
void print(pair<T, T> &pairList)const
{
    cout << pairList.first << " " << pairList.second << endl;
}

template <typename T>
void PrintPairVector(vector<pair<T, T>> &vectorList)
{
    for (const auto &element : vectorList)
    {
        cout << element.first << " " << element.second << endl;
    }
}
