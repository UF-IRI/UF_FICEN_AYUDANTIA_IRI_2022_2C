#include <iostream>
#include <string>

using namespace std;

void io_demo();

int main() {
    unsigned int menu_op;

    do {
        cout << "1. IO Demo" << endl << " ctrl + c para salir" << endl;
        cin >> menu_op;

        switch(menu_op) {
            case 1: {
                io_demo();
                break;
            }
            case 0: {
                goto exit;  
            }
        }
        
    } while (true);

    exit:

    return EXIT_SUCCESS;
}

void io_demo() {
    string name;
    cout << "Ingrese su nombre: ";
    cin >> name;

    cout << "Edad? ";
    int age;
    cin >> age;

    cout << "Su nombre es " << name << " y tiene " << age << " años." << endl;
}