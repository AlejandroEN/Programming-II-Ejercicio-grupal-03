#include "functions.hpp"

const unsigned int CAPACIDAD_MAXIMA = 20;

void bombear(unsigned int *tanque)
{
    unsigned int bombeo = random(1, 10);

    if (*tanque + bombeo <= CAPACIDAD_MAXIMA)
        *tanque += bombeo;
    else
        *tanque = CAPACIDAD_MAXIMA;

    tanque[1]++;
}

bool repartir(unsigned int *tanque)
{
    unsigned int reparticion = random(1, 10);

    if (*tanque >= reparticion)
    {
        *tanque -= reparticion;
        tanque[2]++;
        return true; // Se pudo repartir agua correctamente.
    }
    else
    {
        return false; // No se pudo repartir agua: el tanque se encuentra vacío.
    }
}