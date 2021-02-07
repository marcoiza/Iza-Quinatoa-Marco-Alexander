#include <iostream>
#include "Busqueda.h"
#include "Nodo.h"
#include "Persona.h"

class Secuencial: public Busqueda{
    public:
    void buscar(ListaDoble<Persona>* lista, std::string parametro){
        Nodo<Persona> *aux;
        aux = lista->get_primero();
        bool bandera=false;
        while(bandera==false && aux!=NULL){
            Persona personaAux = aux->get_dato();
            if(personaAux.getCedula() == parametro){
                std::cout<<personaAux.getNombre()<<std::endl;
                std::cout<<personaAux.getApellido()<<std::endl;
                bandera=true;
            }
            aux = aux->get_siguiente();
        }
    }
};
