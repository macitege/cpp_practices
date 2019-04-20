#include <iostream>

int main () {

    double pesos, reais, soles;
    double dollars;

    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais you have in you pocket: ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    dollars = (pesos / 18.83) + (reais / 3.83) + (soles / 3.29);

    std::cout << "US Dollars = $" << dollars <<  "\n";
}
