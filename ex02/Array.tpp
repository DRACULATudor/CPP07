#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _array = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    for(unsigned int i = 0; i < _size; i++)
    {
        copy->_array[i] = this->_array[i]
    }
    copy->_size = this->_size;
}
