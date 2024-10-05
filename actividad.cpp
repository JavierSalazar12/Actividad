#include <iostream>
#include <string>
using namespace std;

struct pasajero {
    string nombre;
    int id, destino;
    pasajero *sig;
};

pasajero *cab, *aux, *aux2;

void registrar(){
    aux = (struct pasajero *) malloc (sizeof(pasajero));
    cout<<"Nombre: ";
    cin>>aux->nombre;
    cout<<"Identificación: ";
    cin>>aux->id;
    cout<<"No. Destino(1. Bocana, 2. Pianguita, 3. Ladrilleros): ";
    cin>>aux->destino;
    aux->sig = NULL;
    if(!cab){
        cab = aux;
    } else {
        aux2=cab;
        while(aux2->sig!=NULL){
            aux2 = aux2->sig;
        }
        aux2->sig = aux;
    }
}


int main(){
    int opcion;
    do {
        cout<<"Menu"<<endl<<"1. Registrar pasajero"<<endl<<"2. Mostrar pasajero"<<endl;
        cin>>opcion;
        switch (opcion) {
        case 1:
            registrar();
        break;
        case 2:
            mostrar();
        break;
        }
    }while(opcion!=2);
};
