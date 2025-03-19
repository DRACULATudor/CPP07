#include "iter.hpp"

template <typename T>
void print(T& x) 
{
    std::cout << x << std::endl;
}

int main(void)
{
    // int arr[] = {1, 2, 3, 4, 5};
    // iter(arr, 5, printInt);
    try
    {
        std::string arr[] = {"hey", "boss", "lol"};
        iter(arr, 3, print);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
