#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _array = new T[n]();
    _size = n;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    _size = copy._size;
    _array = new T[_size]();
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = copy._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &assign)
{
    if (this != &assign)
    {
        delete[] _array;
        _size = assign._size;
        _array = new T[_size]();
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = assign._array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
    if (n >= _size)
    {
        throw std::out_of_range("Out of bounds");
    }
    return _array[n];
}

template <typename T>
const T &Array<T>::operator[](unsigned int n) const
{
    if (n >= _size)
    {
        throw std::out_of_range("Out of bounds");
    }
    return _array[n];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}
