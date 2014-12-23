#include <iostream>
#include "lib/calculator.h"
#include "lib/quandl.h"

int main(int argc, char *argv[]){
    std::cout << calculate(1, 2.00, 1, 2.50) << std::endl;
    std::cout << build_url("AAPL") << std::endl;

    return 0;
}