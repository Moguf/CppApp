#include <iostream>
#include <string>


int main()
{
    int v[] = {10,11,23,10000};
    
    std::string a = "test";
    std::string b = "test";
    std::string c;
    
    c = a + b;
    std::cout << c << std::endl;
    std::cout << "Hello, World\n";

    for(auto& x: v)
        std::cout << &x << std::endl;
}
