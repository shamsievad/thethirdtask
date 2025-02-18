#include "main_class.h"
#include <iostream>
#pragma once
using namespace std;

class Bird: public animal{
public:
    Bird(int num_of_wings_): animal(), num_of_wings(num_of_wings_){}
    Bird(int size_of_body_, int num_of_wings_): animal(size_of_body_), num_of_wings(num_of_wings_){}
    int num_of_wings;
    void makeSound();
};
