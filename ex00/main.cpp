#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;

	const WrongAnimal* wanim = new WrongAnimal();
	const WrongCat* cc = new WrongCat();
	std::cout << cc->getType() << " " << std::endl;
	std::cout << wanim->getType() << " " << std::endl;
	wanim->makeSound();
	cc->makeSound();
	cc->WrongAnimal::makeSound();
	delete wanim;
	delete cc;
}