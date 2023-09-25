/* Integrantes:
 * - Ismael Escobar Núñez (teoría 2)
 * - Ulrich Nieto Rosales (teoría 2)
 * - Ariana Mercado Barbieri (teoría 1)
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