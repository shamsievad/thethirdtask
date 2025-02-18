#include "main_class.h"
#include "Bird.h"
#include "Insects.h"
#include <iostream>

using namespace std;

int main() {
    Bird bird(40, 2);
    bird.makeSound();

    Insects fly(15, 30);
    fly.makeSound();

    return 0;
}

