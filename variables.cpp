#include <iostream>

int main(){

    // int x; //declaration
    // x = 5;
    int x = 5;
    int y = 6;
    int sum = x + y;
    std::cout << x <<"\n";
    std::cout << y <<"\n";
    std::cout << sum <<"\n";
     // int can round off the value to integer we can us e double to usee the decimal portion
    double price = 1.245;
    std::cout << price;

    // single character

    char grade = 'A';
    char initial = 'B';
    std::cout << initial <<"\n";    
    // boolean (true or false)

    bool student = false;
    bool power = true;
    std::cout << student <<"\n";    

    // string (a sentence )

    std::string name = "bro";
    std::string food = "flies";
    std::string like = "butter";

    std::cout << "hello " << like <<"\n";
    std::cout << "you are like " << like <<"\n";

    return 0;
}