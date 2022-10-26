#include <fstream>
#include <iostream>

enum Apertura { LEER = 1, ESCRIBIR, ADICION };

using namespace std;

void estaMiArchivo(string _miArchivo) {
    ifstream estaArchivo.open(_miArchivo);
    if(!(estaArchivo.is_open())) {
        std::cout << "Archivo abierto o no encontrado" << std::endl;
        exit(NO_SUCCESS);
    }
    estaArchivo.close();
    return void;
}

fstream AbrirArchivo(string _miArchivo, unsigned int apertura) {
    fstream miArchivo;

    estaMiArchivo(_miArchivo);

    switch(apertura) {
        case LEER:
            miArchivo.open(_miArchivo, ios::in);
            break;
        case ESCRIBIR:
            miArchivo.open(_miArchivo, ios::out);
            break;
        default:
            miArchivo.open(_miArchivo, ios::app);
    }

    if(!(miArchivo.is_open())) {
        std::cout << "Archivo abierto o no encontrado" << std::endl;
        exit(-1);
    }

    return miArchivo;
}

void resize(int N, unsigned int nueva_cant, Alu *&array){
    Alu *arrayaux = new Alu[nueva_cant];
    if(arrayaux==nullptr)
        return;
    for(i=0;i<nueva_cant;i++){
        arrayaux[i]=(i<N)?array[i]:NULL;
    }
    delete []array;
    array=arrayaux;
}

listaAlumnos* leerAlumnos(fstream pepito) {
    int total=6, ca=0;
    Alu*arrayaux= new Alu[total];
    while(pepito){
        if(ca>=total){
            resize(total,total+2,arrayaux);
            total+=2;
        }
        char coma;
        pepito>>arrayaux[ca].nombre>>coma;
        ca++;
    }
    return arrayaux;
} 