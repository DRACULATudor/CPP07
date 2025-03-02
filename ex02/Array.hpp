#pragma once
#include <cstdlib>
#include <string>
#include <iomanip>
#include <iostream>

template <class T>
class Array
{
private:
    T *_array;
    unsigned int _size;
public:
    Array();
    Array(const Array& arr);
    Array &operator=(const Array& assign);
    Array(unsigned int n);
    ~Array();
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index)const;
    unsigned int size()const;
};
