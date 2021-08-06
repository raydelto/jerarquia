#include <iostream>
#include "Arbol.h"

int main()
{
    Nodo* presidente = new Nodo("Presidente");
    Nodo* vp1 = new Nodo("vp1");
    Nodo* vp2 = new Nodo("vp2");
    Nodo* gerente1 = new Nodo("gerente1");
    Nodo* gerente2 = new Nodo("gerente2");
    Nodo* supervisor1 = new Nodo("supervisor1");
    Nodo* supervisor2 = new Nodo("supervisor2");
    Nodo* operario1 = new Nodo("operario1");
    Nodo* operario2 = new Nodo("operario2");
    
    presidente->AgregarHijo(vp1);
    presidente->AgregarHijo(vp2);

    vp1->AgregarHijo(gerente1);
    vp2->AgregarHijo(gerente2);

    gerente1->AgregarHijo(supervisor1);
    gerente2->AgregarHijo(supervisor2); 

    supervisor1->AgregarHijo(operario1);
    supervisor2->AgregarHijo(operario2);
    Arbol* arbol = new Arbol(presidente);
    arbol->Recorrer();
}
