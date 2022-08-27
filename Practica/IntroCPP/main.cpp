#include "intro.h"

using namespace std;

int main() {
    unsigned int menu_op;

    do {
        cout << "1. IO Demo" << endl
             << "0. Exit o ctrl + c para salir" << endl;


        cin >> menu_op;

        switch(menu_op) {
            case 1: {
                Intro_A_Cpp::io_demo();
                break;
            }
            case 0: { goto exit; }
        }
        
    } while (true);

    exit:
        return EXIT_SUCCESS;
}