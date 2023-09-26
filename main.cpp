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
    unsigned int tanqueA[3] = {10, 0, 0};
    unsigned int tanqueB[3] = {10, 0, 0};

    // Simular el proceso de repartición y bombeo para tanque A
    while (repartir(tanqueA))
        bombear(tanqueA);

    // Simular el proceso de repartición y bombeo para tanque B
    while (repartir(tanqueB))
        bombear(tanqueB);

    // Determinar cuál de los dos tanques tiene más agua
    unsigned int *tanqueActual = (tanqueA[0] > tanqueB[0]) ? tanqueA : tanqueB;

    // Seguir bombeando y repartiendo desde el tanque con más agua hasta que esté vacío
    while (repartir(tanqueActual))
        bombear(tanqueActual);

    return 0;
}