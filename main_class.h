#include <iostream>
#include <string>
#pragma once
using namespace std;

class animal {
public:


    animal(int size_of_body_): size_of_body(size_of_body_) {
	size_of_body = size_of_body_;
    }
    animal(): size_of_body(15){}
    int get_size(){
            return size_of_body;
        }
    void set_size(int size_of_body_){
    	 size_of_body = size_of_body_;
    }
    void makeSound();
private:
    int size_of_body;
};
