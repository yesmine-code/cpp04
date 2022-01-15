#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    ~Animal();
    std::string getType(void) const ;
    virtual void makeSound(void) const;
};

#endif