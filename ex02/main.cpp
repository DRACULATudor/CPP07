#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
    Array<int> hey(34);
    std::cout << "Proof of int array workingn\n" << std::endl;
    for (unsigned int i = 0; i < hey.size(); i++)
    {
        hey[i] = i+ 1 ;
    }
    Array<int> copy_of_hey(hey);
    for (unsigned int i = 0; i < hey.size(); i++)
    {
        std::cout << "Hey Array elements are: " << hey[i] << std::endl;
        std::cout << "Copy_Of_Hey Array elements are: " << copy_of_hey[i] << std::endl;
    }
    copy_of_hey[0] = 23;
    std::cout << "Hey Array first element is: " << hey[0] << std::endl;
    std::cout << "Copy_Of_Hey Array first element is: " << copy_of_hey[0] << std::endl;

    std::cout << "Proof of string array workingn\n" << std::endl;
    Array<std::string> yo(3);
    Array<std::string> yo_copy(3);
    yo[0] = "First String";
    yo[1] = "Second String";
    yo[2] = "Third String";
    for (unsigned int i = 0; i < yo.size(); i++)
    {
        yo_copy[i] = yo[i];
        std::cout << "Yo Array elements are: " << yo[i] << std::endl;
        std::cout << "Copy_Of_Yo Array elements are: " << yo_copy[i] << std::endl;
    }
    try
    {
        hey[35] = 12; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
