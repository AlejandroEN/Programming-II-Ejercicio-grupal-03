#include <random>
#include "utilities.hpp"

int random(int lower_limit, int upper_limit)
{
    random_device randomDevice;
    default_random_engine defaultEngine(randomDevice());
    uniform_int_distribution<int> distribution(lower_limit, upper_limit);
    return distribution(defaultEngine);
}