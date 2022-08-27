#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    /*char* letters = new char[26];
    for (int i = 0; i < 26; i++) {
        letters[i] = 'a' + i;
        std::cout << letters[i] << " ";
    }

    char* letterCopy = new char[12];
    cout << endl;
    std::copy(letters, letters + 12, letterCopy);

    for(int i = 0; i < 26; i++) {
        cout << letterCopy[i] << " ";
    }
    cout << endl;*/

    unsigned int n = 9;

    std::cout << "Ingrese un valor mayor a 5 e impar: ";
    do {
        std::cin >> n;
        if(n > 5 && n % 2 == 1) goto done;
        std::cout << "Intente nuevamente, recuerde numero >= 5 e impar: ";
    } while (!(n > 5 && n % 2 == 1));
    done:;

    for(unsigned int i = 0; i < n; i++) {
        for(unsigned int j = 0; j < n; j++) {
            if((i == j) || (i == n - 1 - j) || (j == n/2) || (j >= n/2 && i <= n - 1 - j)) {
                cout << "*";
            } else { cout << " "; }
        }
        cout << std::endl;
    }

    return 0;
}