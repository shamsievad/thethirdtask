#include "main_class.h"
#include <iostream>
#pragma once
using namespace std;

class Insects: public animal{
public:
	Insects(int num_of_paws_): animal(), num_of_paws(num_of_paws_){} 
	Insects(int size_of_body_, int num_of_paws_): animal(size_of_body_), num_of_paws(num_of_paws_){}
    	int num_of_paws;
	void makeSound();
};
