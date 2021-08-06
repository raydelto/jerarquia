#include "Nodo.h"

Nodo::Nodo(std::string nombre): 
_nombre(nombre), 
_siguiente(nullptr), 
_primerHijo(nullptr),
_ultimoHijo(nullptr)
{
}

void Nodo::AgregarHijo(Nodo* hijo)
{
    if(_primerHijo == nullptr) //Si la lista de hijos no está vacía
    {
        _primerHijo = hijo;
        _ultimoHijo = hijo;
    }
    else //Si la lista no está vacía
    {
        _ultimoHijo->_siguiente = hijo;
        _ultimoHijo = hijo;
    }
}