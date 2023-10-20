//
//  main.cpp
//  console calculator
//
//  Created by Nisha Ramprasath on 20/10/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    
    char op;
    double num1;
    double num2;
    double result;
    
    std::cout<<"******************calculator*************\n";
    std::cout<<"eneter either (+ - * /)";
    std::cin >> op;
    
    std::cout<<"--enter #1---";
    std::cin >> num1;
    
    
    std::cout<<"--enter #2---";
    std::cin >> num2;
    
    switch(op){
        case '+':
            result=num1+num2;
            std:: cout <<"result" << result << '\n';
            break;
            
        case '-':
            result=num1-num2;
            std:: cout <<"result" << result << '\n';
            break;
            
        case '*':
            result=num1*num2;
            std:: cout <<"result" << result << '\n';
            break;
            
        case '/':
            result=num1/num2;
            std:: cout <<"result" << result << '\n';
            break;
            
        default:
            std:: cout <<"that wasant a valid response";
            
            
            
            
            
    }

    
    
    
    std::cout<<"**************************************\n";

    
    return 0;
}
