#pragma once
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

template <typename T>
void iter(T *adress, int length, void fct(T &))
{
    if (!adress || length <= 0)
        return;
    for (int i = 0; i < length; i++)
        fct(adress[i]);
}