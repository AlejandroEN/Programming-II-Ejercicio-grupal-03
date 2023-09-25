/* Integrantes:
 * - Ismael Escobar Núñez (teoría )
 * - Ulrich Nieto Rosales (teoría )
 * - Ariana Mercado Barbieri (teoría )
 */

#include <iostream>
#include "functions.hpp"

int main()
{
    // tanque = {cantidad actual de agua, cantidad de bombeos, cantidad de reparticiones}
    auto *tanqueA = new unsigned int[3] {10, 0, 0};
    auto *tanqueB = new unsigned int[3] {10, 0, 0};

    while (tanqueA[0] != 0)
    {
        repartir(tanqueA);
        bombear(tanqueA);
    }
}