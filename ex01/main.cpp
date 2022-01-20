#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(){
	Animal *anim[10];
	Brain *brain;
	int i;

	for(i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			anim[i] = new Cat();
		else
			anim[i] = new Dog();
		std::cout<<"TAB["<<i<<"] = " << anim[i]->getType() << std::endl;
	}
	brain = anim[0]->getBrain();
	brain->ideas[0] = "i want loooo0ove !!";
	brain->ideas[1] = "i want to eat, but i just did , why not eating again  !!";
	brain->ideas[2] = "i want to go out and see some friends !!";
	for (i = 0; i < 3; i++)
		std::cout<<anim[0]->getBrain()->ideas[i]<<std::endl;
	*(anim[9]) = *(anim[0]);
	for (i = 0; i < 3; i++)
		std::cout<<anim[9]->getBrain()->ideas[i]<<std::endl;
	*(anim[2]) = *(anim[0]);
	std::cout<<anim[2]->getBrain()->ideas[0]<<std::endl;
	std::cout<<"*************** destruction *************"<<std::endl;
	for(i = 0; i < 10; i++) {
		std::cout<<"TAB["<<i<<"]";
		delete anim[i];
	}

}