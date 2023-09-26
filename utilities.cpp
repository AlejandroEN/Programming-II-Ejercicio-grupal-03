#include <random>
#include "utilities.hpp"

int random(int lowerLimit, int upperLimit)
{
    random_device randomDevice;
    default_random_engine defaultEngine(randomDevice());
    uniform_int_distribution<int> distribution(lowerLimit, upperLimit);
    return distribution(defaultEngine);
}