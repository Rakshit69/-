
#include <iostream>
#include <istream>


// cout << (insertion operation)
// cin >> (extraction operation)


int main(){
    std::string name;
    int age;
    std::cout << "whats your name nigger ";
    // std::getline();
    // std::cout << "whats your age nigger";
    std::getline(std::cin >> std::ws, name);


    std::cout << "whats your age?:";
    std::cin >> age;

    std::cout << "hello " << name << "\n";
    std::cout << " you are  " << age << " years old tbh ngl" << "\n";

    return 0;
}