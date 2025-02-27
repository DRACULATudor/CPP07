#pragma once
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

template <typename T>
void swap(T &var, T &var2)
{
    T temp = var;
    var = var2;
    var2 = temp;
}

template <typename T>
T min(const T &var, const T &var2)
{
    if (var > var2)
        return var2;
    else if (var < var2)
        return var;
    else
        return var2;
}

template <typename T>
T max(const T &var, const T &var2)
{
    if (var > var2)
        return var;
    else if (var < var2)
        return var2;
    else
        return var2;
}
