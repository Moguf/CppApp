#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    ifstream file;

    file.open("test.txt");
    if(! file.is_open()){
        cerr << "Don't open file." << endl;
        return EXIT_FAILURE;
    }

    string line;
    getline(file, line);
    if(file.fail()){
        cerr << "Don't read file." << endl;
        return EXIT_FAILURE;
    }
    cout << line << endl;
}
    

