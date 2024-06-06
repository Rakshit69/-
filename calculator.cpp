#include <iostream>
#include <cmath>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**********CALCULATOR**********\n";
    std::cout << "enter either (+ - * / )";
    std::cin >> op;
    std::cout << "enter num 1 ";
    std::cin >> num1;
    std::cout << "enter num 2 ";
    std::cin >> num2;

    switch(op){

        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << "\n";
            break;
        default:
            std::cout << "that wasnt a valid operator";
            break;
    }

    std::cout << "****************************************";
    return 0;
}