#include <iostream>
#include <string>


enum class Color {red, blue, green};
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
    
    Color col = Color::red;
    Color col2 = Color::blue;
    if( col != col2 ){
        std::cout << "red != blue" << std::endl;
    }
        
}


class Vector{
public:
    Vector(int s);
    double& operator[](int i) { return elem[i];}
    int size(){ return sz;}
private:
    double *elem;
    int sz;
};

Vector::Vector(int s):elem{new double[s]},sz{s}
{
}


enum class Traffic_light{ yellow, red, green};

Traffic_light& operator++(Traffic_light& t)
{
    switch(t){
    case Traffic_light::green: return t=Traffic_light::yellow;
    case Traffic_light::yellow: return t=Traffic_light::red;
    case Traffic_light::red: return t=Traffic_light::green;        
    }
}

    
