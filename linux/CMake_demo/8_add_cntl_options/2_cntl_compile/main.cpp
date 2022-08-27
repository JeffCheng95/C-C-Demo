#include <iostream>

int main()
{
#ifdef WWW1
    std::cout << "Hello world ---- 1" << std::endl;
#endif

#ifdef WWW2
    std::cout << "Hello world ---- 2" << std::endl;
#endif
    return 0;
}

