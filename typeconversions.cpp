#include <iostream>

int main(){

    // double x = (int) 3.14;

    // char x =  100;
    // std::cout << (char) 100;
    double correct = 8;
    double questions = 10;
    double score = correct / questions * 100;

    std::cout << score << "%" ;
    return 0;
}