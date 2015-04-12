#include <iostream>
using namespace std;


int global=10;
int main()
{

    int global=1;

    std::cout<<global<<::global<<std::endl;

    return 0;
}
