/*
 * Integrantes:
 * - Ismael Escobar Núñez (teoría 2)
 * - Ulrich Nieto Rosales (teoría 2)
 * - Ariana Mercado Barbieri (teoría 1)
 */

#include <iostream>
#include "functions.hpp"

int main() {
    // tanque = {cantidad actual de agua, cantidad de bombeos, cantidad de reparticiones}
    auto *tanqueA = new unsigned int[3] {10, 5, 0};
    auto *tanqueB = new unsigned int[3] {10, 0, 0};

    while (repartir(tanqueA))
        bombear(tanqueA);

    while (repartir(tanqueB))
        bombear(tanqueB);

    unsigned int *tanqueActual = *tanqueA > *tanqueB ? tanqueA : tanqueB;

    do
        bombear(tanqueActual);
    while (repartir(tanqueActual));
}