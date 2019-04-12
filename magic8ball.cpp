#include <iostream>
#include <cstdlib>
#include <cstring>

int main () {

    std::cout << "Fahrettin\'in kibirli lambasına hosgeldin! \n";
    std::cout << "Bir soru sor ve gelecegini ogren... \n";
    std::cout << "Ne sormak isterdin: \n";
    std::string question;
    std::cin >> question;
    srand(time(NULL));
    int answer = std::rand() % 10;

    switch(answer) {
        case 0:
            std::cout << "\n Sanane bundan. Ne dusunuyon bu kadar?\n \n";
            break;
        case 1:
            std::cout << "\n Banane bundan. Ne dusunduruyon beni boyle sacma seyler? Hadi git.\n \n";
            break;
        case 2:
            std::cout << "\n Guzel soru bak... Bi dusuneyim. ZzzZzZZZZzZZzzzzz....\n \n";
            break;
        case 3:
            std::cout << "\n Hahahahahah salak! Sacmalama. Naber, naptin?\n \n";
            break;
        case 4:
            std::cout << "\n Olur bu. Olacak bence.... Bak kuzenim yanim da, ona onayliyor... Evet. Olur o is.\n \n";
            break;
        case 5:
            std::cout << "\n Tih! Sen kimsin ya? Soruya bak. Armut...\n \n";
            break;
        case 6:
            std::cout << "\n Sanane bundan. Ne dusunuyon bu kadar?\n \n";
            break;
        case 7:
            std::cout << "\nBanane bundan. Ne dusunduruyon beni boyle sacma seyler? Hadi git.\n \n";
            break;
        case 8:
            std::cout << "\nGuzel soru bak... Bi dusuneyim. ZzzZzZZZZzZZzzzzz....\n \n";
            break;
        case 9:
            std::cout << "\nHahahahahah salak! Sacmalama. Naber, naptin?\n \n";
            break;
    };
};