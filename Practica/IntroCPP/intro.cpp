#include "intro.h"

void Intro_A_Cpp::io_demo() {
    std::string name;
    std::cout << "Ingrese su nombre: ";
    std::cin >> name;

    std::cout << "Edad? ";
    int age;
    std::cin >> age;

    std::cout << "Su nombre es " << name << " y tiene " << age << " años." << std::endl;
}